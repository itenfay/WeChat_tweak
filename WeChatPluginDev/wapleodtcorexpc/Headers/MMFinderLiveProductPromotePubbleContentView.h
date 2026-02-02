//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveProductHintAnimationInfo, MMFinderLiveGoodsHotSaleAnimationView, MMFinderLiveGoodsItem, MMFinderLiveGoodsPromoteContentView, MMFinderLiveHotSaleAnimationLogic, NSString;

@interface MMFinderLiveProductPromotePubbleContentView
{
    _Bool _closeBySelf;
    unsigned int _startExposingTime;
    MMFinderLiveGoodsPromoteContentView *_goodsView;
    MMFinderLiveGoodsItem *_goods;
    MMFinderLiveHotSaleAnimationLogic *_hotSaleAnimationLogic;
    MMFinderLiveGoodsHotSaleAnimationView *_hotSaleAnimationView;
}

+ (id)transferPromoteBufferToGoodsItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveGoodsHotSaleAnimationView *hotSaleAnimationView; // @synthesize hotSaleAnimationView=_hotSaleAnimationView;
@property(retain, nonatomic) MMFinderLiveHotSaleAnimationLogic *hotSaleAnimationLogic; // @synthesize hotSaleAnimationLogic=_hotSaleAnimationLogic;
@property(nonatomic) _Bool closeBySelf; // @synthesize closeBySelf=_closeBySelf;
@property(nonatomic) unsigned int startExposingTime; // @synthesize startExposingTime=_startExposingTime;
@property(retain, nonatomic) MMFinderLiveGoodsItem *goods; // @synthesize goods=_goods;
@property(retain, nonatomic) MMFinderLiveGoodsPromoteContentView *goodsView; // @synthesize goodsView=_goodsView;
- (void)startHideAnimationWithPart1Duration:(double)arg1 part2Duration:(double)arg2;
- (void)startDisplayAnimation:(double)arg1;
- (id)finderLiveLogReportValueForKey:(id)arg1;
- (unsigned long long)willHandleProductHintAnimation;
- (void)receiveHintAnimationInfo:(id)arg1;
@property(readonly, nonatomic) FinderLiveProductHintAnimationInfo *currentHintAnimationInfo;
@property(readonly, nonatomic) _Bool isDuringHintAnimation;
- (void)onWebImageGetDifferentSize;
- (id)productItem;
- (id)stockID;
- (void)onShowed;
- (void)reportGoodsBubbleExposeTime;
- (void)reportGoodsBubbleExposeTimeAndReset;
- (void)onDismissed;
- (void)onClosed;
- (void)onTapActionButtonForAudience;
- (void)onTapActionForAudience;
- (void)onGoodsPromoteContentViewActionButtonClicked:(id)arg1;
- (void)handleSingleTapGesture:(id)arg1;
- (id)getCurrentPromoteBuffer;
- (void)updatepromoteBuffer:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (id)currentPromoteItem;
- (void)updatePromoteItem:(id)arg1;
- (_Bool)isCurrentPromoteItem:(id)arg1;
- (void)refreshData;
- (void)layoutUI;
- (void)convertPromoteMsgInfo:(id)arg1;
- (id)initWithPromoteMsgInfo:(id)arg1 taskId:(id)arg2;
- (_Bool)hasAnimationResource;
- (id)animationFile;
- (void)finishHotSaleAnimation:(CDUnknownBlockType)arg1;
- (void)updateHotSaleAnimation:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startHotSaleAnimation:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

