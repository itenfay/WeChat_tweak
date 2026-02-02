//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveOlyBarrageTravel, NSArray, NSMutableArray;

@interface MMFinderLiveOlyBarrageContentView : UIView
{
    _Bool _hasStartPlay;
    CDUnknownBlockType _displayFinishCompletion;
    CDUnknownBlockType _barragePubbleTapCallback;
    NSArray *_barrageTravelList;
    MMFinderLiveOlyBarrageTravel *_barrageTravel;
    NSMutableArray *_displayingPubbleList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasStartPlay; // @synthesize hasStartPlay=_hasStartPlay;
@property(retain, nonatomic) NSMutableArray *displayingPubbleList; // @synthesize displayingPubbleList=_displayingPubbleList;
@property(retain, nonatomic) MMFinderLiveOlyBarrageTravel *barrageTravel; // @synthesize barrageTravel=_barrageTravel;
@property(retain, nonatomic) NSArray *barrageTravelList; // @synthesize barrageTravelList=_barrageTravelList;
@property(copy, nonatomic) CDUnknownBlockType barragePubbleTapCallback; // @synthesize barragePubbleTapCallback=_barragePubbleTapCallback;
@property(copy, nonatomic) CDUnknownBlockType displayFinishCompletion; // @synthesize displayFinishCompletion=_displayFinishCompletion;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)displayFinish;
- (struct CGRect)getBarragePubblePresentFrame:(id)arg1 contentPresentFrame:(struct CGRect)arg2;
- (id)getDisplayAnimationGroup;
- (void)innerStartDisplay;
- (void)configBarragePubbleCells:(id)arg1 withTravelList:(id)arg2;
- (void)layoutSubviews;
- (void)refreshDisplayingBarragePubblesForLightTorch;
- (id)requestBarrageHitTestViewWithConvertedPoint:(struct CGPoint)arg1;
- (void)cancelDisplay;
- (void)startDisplay;
- (void)addBarragePubbleCellList:(id)arg1;
- (id)initWithBarrageTravelList:(id)arg1;

@end

