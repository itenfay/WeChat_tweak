//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAppPresentAnimateTransition : NSObject
{
    _Bool _maskEnable;
    _Bool _needZoom;
}

@property(nonatomic) _Bool needZoom; // @synthesize needZoom=_needZoom;
@property(nonatomic) _Bool maskEnable; // @synthesize maskEnable=_maskEnable;
- (id)makeMaskViewAnimationGroup:(double)arg1 zoomFactor:(double)arg2;
- (id)makeForVCViewAnimation:(double)arg1 zoomFactor:(double)arg2;
- (_Bool)isNormalPresentAnimationUseNewImplementation;
- (_Bool)isZoomPresentAnimationUseNewImplementation;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

