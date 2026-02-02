//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIAccessibilityElement.h>

@class QMapView;

@interface QBaseAccessibilityElement : UIAccessibilityElement
{
    int _flickcount;
    QMapView *_baseMapView;
}

- (void).cxx_destruct;
@property(nonatomic) int flickcount; // @synthesize flickcount=_flickcount;
@property(nonatomic) __weak QMapView *baseMapView; // @synthesize baseMapView=_baseMapView;
- (void)resetFlickCount;
- (void)changeMapCenter:(struct CGPoint)arg1;
- (struct CGPoint)makeMovementPoint:(double)arg1 withYRatio:(double)arg2;
- (id)createRotorItemWithPreviousDirection:(id)arg1;
- (id)createRotorItemWithNextDirection:(id)arg1;
- (id)buildPOIRotor;
- (id)buildZoomRotor;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)setMapZoomLevelDelta:(int)arg1;
- (id)description;

@end

