//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveOlyBarragePubbleCell, MMFinderLiveOlyBarrageTravel;

@interface MMFinderLiveOlyBarragePubbleRoute : NSObject
{
    _Bool _hasInvokeContinueDisplay;
    MMFinderLiveOlyBarragePubbleCell *_floatingPubbleCell;
    MMFinderLiveOlyBarrageTravel *_rootTravel;
    CDUnknownBlockType _displayFinishCompletion;
    struct CGPoint _currentCenter;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType displayFinishCompletion; // @synthesize displayFinishCompletion=_displayFinishCompletion;
@property(nonatomic) _Bool hasInvokeContinueDisplay; // @synthesize hasInvokeContinueDisplay=_hasInvokeContinueDisplay;
@property(nonatomic) struct CGPoint currentCenter; // @synthesize currentCenter=_currentCenter;
@property(retain, nonatomic) MMFinderLiveOlyBarrageTravel *rootTravel; // @synthesize rootTravel=_rootTravel;
@property(retain, nonatomic) MMFinderLiveOlyBarragePubbleCell *floatingPubbleCell; // @synthesize floatingPubbleCell=_floatingPubbleCell;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (long long)getLinearAnimateStageIndexWithCurrentPercent:(double)arg1;
- (id)getAnimationRouteWithPrecentCenter:(struct CGPoint)arg1 containerSize:(struct CGSize)arg2;
- (double)getRadiusPercentForPoint:(struct CGPoint)arg1 containerSize:(struct CGSize)arg2;
- (void)displayWithAnimationRoute:(id)arg1;
- (void)adjustPresentCenter;
- (struct CGRect)getPubbleCellPresentFrame;
- (void)pause;
- (void)continueDisplay;
- (void)endFloating;
- (void)startFloatingWithDuration:(double)arg1;

@end

