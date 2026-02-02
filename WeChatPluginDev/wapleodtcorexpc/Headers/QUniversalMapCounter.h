//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TBMapCommonCounter;

@interface QUniversalMapCounter : NSObject
{
    TBMapCommonCounter *_worldMapCounter;
    TBMapCommonCounter *_customLayerCounter;
    TBMapCommonCounter *_indoorCounter;
    TBMapCommonCounter *_darkModeCounter;
    TBMapCommonCounter *_pointEventCounter;
    TBMapCommonCounter *_heatMapCounter;
    TBMapCommonCounter *_honeyCombHeatCounter;
    TBMapCommonCounter *_arcOverlayCounter;
    TBMapCommonCounter *_trailCounter;
    TBMapCommonCounter *_scatterCounter;
    TBMapCommonCounter *_scatterBitmapCounter;
    TBMapCommonCounter *_groundOverlayCounter;
    TBMapCommonCounter *_aoiLayerCounter;
    TBMapCommonCounter *_offlineMapCounter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TBMapCommonCounter *offlineMapCounter; // @synthesize offlineMapCounter=_offlineMapCounter;
@property(retain, nonatomic) TBMapCommonCounter *aoiLayerCounter; // @synthesize aoiLayerCounter=_aoiLayerCounter;
@property(retain, nonatomic) TBMapCommonCounter *groundOverlayCounter; // @synthesize groundOverlayCounter=_groundOverlayCounter;
@property(retain, nonatomic) TBMapCommonCounter *scatterBitmapCounter; // @synthesize scatterBitmapCounter=_scatterBitmapCounter;
@property(retain, nonatomic) TBMapCommonCounter *scatterCounter; // @synthesize scatterCounter=_scatterCounter;
@property(retain, nonatomic) TBMapCommonCounter *trailCounter; // @synthesize trailCounter=_trailCounter;
@property(retain, nonatomic) TBMapCommonCounter *arcOverlayCounter; // @synthesize arcOverlayCounter=_arcOverlayCounter;
@property(retain, nonatomic) TBMapCommonCounter *honeyCombHeatCounter; // @synthesize honeyCombHeatCounter=_honeyCombHeatCounter;
@property(retain, nonatomic) TBMapCommonCounter *heatMapCounter; // @synthesize heatMapCounter=_heatMapCounter;
@property(retain, nonatomic) TBMapCommonCounter *pointEventCounter; // @synthesize pointEventCounter=_pointEventCounter;
@property(retain, nonatomic) TBMapCommonCounter *darkModeCounter; // @synthesize darkModeCounter=_darkModeCounter;
@property(retain, nonatomic) TBMapCommonCounter *indoorCounter; // @synthesize indoorCounter=_indoorCounter;
@property(retain, nonatomic) TBMapCommonCounter *customLayerCounter; // @synthesize customLayerCounter=_customLayerCounter;
@property(retain, nonatomic) TBMapCommonCounter *worldMapCounter; // @synthesize worldMapCounter=_worldMapCounter;
- (id)init;

@end

