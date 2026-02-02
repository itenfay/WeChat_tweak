//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveProductHintAnimationInfo, MMFinderLiveECHotSaleLikeAnimationMaskView, MMFinderLiveTaskId, MMUILabel;

@interface MMFinderLiveGoodsPromoteContentView
{
    MMFinderLiveTaskId *_taskID;
    MMFinderLiveECHotSaleLikeAnimationMaskView *_hotSaleLikeAnimationMaskView;
    MMUILabel *_serialNumLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *serialNumLabel; // @synthesize serialNumLabel=_serialNumLabel;
@property(retain, nonatomic) MMFinderLiveECHotSaleLikeAnimationMaskView *hotSaleLikeAnimationMaskView; // @synthesize hotSaleLikeAnimationMaskView=_hotSaleLikeAnimationMaskView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskID; // @synthesize taskID=_taskID;
- (id)finderLiveLogReportValueForKey:(id)arg1;
@property(readonly, nonatomic) FinderLiveProductHintAnimationInfo *currentHintAnimationInfo;
- (void)receiveHintAnimationInfo:(id)arg1;
@property(readonly, nonatomic) _Bool isDuringHintAnimation;
- (void)refreshData;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

