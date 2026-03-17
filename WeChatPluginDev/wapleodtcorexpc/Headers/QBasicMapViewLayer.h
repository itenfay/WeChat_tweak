//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <QuartzCore/CALayer.h>

@interface QBasicMapViewLayer : CALayer
{
    double _zoomLevel;
    double _rotation;
    double _overlooking;
    struct CGPoint _centerCoordinate;
    struct CGPoint _centerOffset;
    struct CGRect _anchorZoomLevel;
}

+ (_Bool)needsDisplayForKey:(id)arg1;
+ (unsigned long long)regionChangeOptionForKey:(id)arg1;
+ (_Bool)isMatchAnimateKey:(id)arg1;
@property(nonatomic) struct CGRect anchorZoomLevel; // @synthesize anchorZoomLevel=_anchorZoomLevel;
@property(nonatomic) struct CGPoint centerOffset; // @synthesize centerOffset=_centerOffset;
@property(nonatomic) double overlooking; // @synthesize overlooking=_overlooking;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) struct CGPoint centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)basicMapView;

@end

