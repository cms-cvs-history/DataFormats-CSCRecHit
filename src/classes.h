#include <DataFormats/CSCRecHit/interface/CSCRecHit2D.h>
#include <DataFormats/CSCRecHit/interface/CSCRecHit2DCollection.h>
#include <DataFormats/CSCRecHit/interface/CSCRecHit1D.h>
#include <DataFormats/CSCRecHit/interface/CSCRecHit1DCollection.h>
#include <DataFormats/CSCRecHit/interface/CSCSegment.h>
#include <DataFormats/CSCRecHit/interface/CSCSegmentCollection.h>

#include <DataFormats/Common/interface/Wrapper.h>
#include <vector>

namespace{ 
  namespace {
    CSCRecHit2DCollection dc;
    edm::Wrapper<CSCRecHit2DCollection> dwc;
  }
}

namespace{
  namespace {
    CSCRecHit1DCollection dc1;
    edm::Wrapper<CSCRecHit1DCollection> dcw1;
  }
}

namespace{ 
  namespace {
    CSCSegmentCollection seg;    
    edm::Wrapper<CSCSegmentCollection> dwc1;
  }
}
