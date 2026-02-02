//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveRewardGiftItem, MMFinderLiveTask, MMFinderLiveTaskId, NSArray, NSIndexPath, NSMutableArray;

@interface MMLiveRewardGiftSendingCountMenuBar
{
    CDUnknownBlockType _tapAction;
    MMFinderLiveRewardGiftItem *_giftItem;
    MMFinderLiveTaskId *_liveTaskId;
    NSMutableArray *_countNumberViews;
    NSArray *_batchSendConfigNumbers;
    NSIndexPath *_indexPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) NSArray *batchSendConfigNumbers; // @synthesize batchSendConfigNumbers=_batchSendConfigNumbers;
@property(retain, nonatomic) NSMutableArray *countNumberViews; // @synthesize countNumberViews=_countNumberViews;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(copy, nonatomic) CDUnknownBlockType tapAction; // @synthesize tapAction=_tapAction;
- (id)currentBasicReportParams;
- (void)updateWithGiftItem:(id)arg1 batchSendConfigNumbers:(id)arg2 indexPath:(id)arg3;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (void)onClickCountNumberLabel:(id)arg1;
- (double)selfCornerRadius;
- (double)triangeArrowHeight;
- (double)triangeArrowWidth;
- (void)registerCountNumberButtons:(id)arg1;
- (void)removeAllCountNumberButtons;
- (void)removeAllSubViews;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2 orientation:(long long)arg3;

@end

