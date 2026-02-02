//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveTaskId, NSMutableArray;

@interface MMFinderLiveOlyBarrageFloatingContainerView : UIView
{
    MMLiveTaskId *_taskId;
    NSMutableArray *_floatingBarragePubbleRouteList;
    struct CGSize _currSelfSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize currSelfSize; // @synthesize currSelfSize=_currSelfSize;
@property(retain, nonatomic) NSMutableArray *floatingBarragePubbleRouteList; // @synthesize floatingBarragePubbleRouteList=_floatingBarragePubbleRouteList;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)getFinderLiveTask;
- (_Bool)isContainPubbleCell:(id)arg1 barrageTravel:(id)arg2;
- (void)clearBarragePubbles;
- (id)requestBarrageHitTestViewWithConvertedPoint:(struct CGPoint)arg1;
- (void)notifyOtherPubbleRoutesEndFloatingExcept:(id)arg1;
- (void)addBarragePubbleCell:(id)arg1 presentFrame:(struct CGRect)arg2 barrageTravel:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

