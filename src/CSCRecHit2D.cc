#include <DataFormats/CSCRecHit/interface/CSCRecHit2D.h>
#include <iostream>

CSCRecHit2D::CSCRecHit2D() :
  theLocalPosition(0.,0.), 
  theLocalError(0.,0.,0.),
  theChaCo( ChannelContainer() ),
  theADCs( ADCContainer() ),
  theWireGroups( ChannelContainer() ),
  theTpeak( -999. ),  
  thePositionWithinStrip(-999.),
  theErrorWithinStrip(-999.),
  theQuality( 0 )
{}

CSCRecHit2D::CSCRecHit2D( const CSCDetId& id, 
                          const LocalPoint& pos, 
                          const LocalError& err, 
	                        const ChannelContainer& channels, 
                          const ADCContainer& adcs,
                          const ChannelContainer& wgroups,
                          float tpeak, 
			  float posInStrip, 
                          float errInStrip,
			  int quality ):
  RecHit2DLocalPos( id ), 
  theLocalPosition( pos ), 
  theLocalError( err ),
  theChaCo( channels ),
  theADCs( adcs ),
  theWireGroups( wgroups ),
  theTpeak( tpeak ),
  thePositionWithinStrip( posInStrip ),
  theErrorWithinStrip( errInStrip ),
  theQuality( quality )
{}

CSCRecHit2D::~CSCRecHit2D() {}

std::ostream& operator<<(std::ostream& os, const CSCRecHit2D& rh) {
  os << "CSCRecHit2D: local x = " << rh.localPosition().x() << " +/- " << sqrt( rh.localPositionError().xx() ) <<
    " y = " << rh.localPosition().y() << " +/- " << sqrt( rh.localPositionError().yy() ) <<
    " in strip X = " << rh.positionWithinStrip() << " +/-  = " << rh.errorWithinStrip()<<" quality = "<<rh.quality();
  return os;
}
