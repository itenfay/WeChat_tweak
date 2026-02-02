//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveECHotSaleLikeAnimationMaskView, MMFinderLiveGoodsViewModel, MMFinderLiveTaskId, NSString, UIView;
@protocol MMFinderLiveGoodsCellBaseDelegate;

@interface MMFinderLiveGoodsCell
{
    id <MMFinderLiveGoodsCellBaseDelegate> _cellDelegate;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveGoodsViewModel *_goodsViewModel;
    UIView *_topSeparatorLine;
    UIView *_bottomSeparatorLine;
    MMFinderLiveECHotSaleLikeAnimationMaskView *_hotSaleLikeAnimationMaskView;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveECHotSaleLikeAnimationMaskView *hotSaleLikeAnimationMaskView; // @synthesize hotSaleLikeAnimationMaskView=_hotSaleLikeAnimationMaskView;
@property(retain, nonatomic) UIView *bottomSeparatorLine; // @synthesize bottomSeparatorLine=_bottomSeparatorLine;
@property(retain, nonatomic) UIView *topSeparatorLine; // @synthesize topSeparatorLine=_topSeparatorLine;
@property(retain, nonatomic) MMFinderLiveGoodsViewModel *goodsViewModel; // @synthesize goodsViewModel=_goodsViewModel;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLiveGoodsCellBaseDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (id)finderLiveLogReportValueForKey:(id)arg1;
- (void)shine;
- (void)receiveHotSaleLikeAnimationMaskView:(id)arg1;
@property(readonly, nonatomic) _Bool isDuringHintAnimation;
- (void)receiveHintAnimationInfo:(id)arg1;
- (void)onGoodsViewModelUpdateByAppMessage:(id)arg1;
- (void)addHotSaleLikeAnimationMaskView;
- (void)prepareForReuse;
- (void)updateWithGoodsViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

