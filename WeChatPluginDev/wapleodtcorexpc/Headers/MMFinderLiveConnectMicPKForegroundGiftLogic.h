//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveConnectMicPKForegroundGiftContainerView, MMFinderLiveRewardGiftItem, MMFinderLiveTaskId, NSMutableDictionary, NSString;

@interface MMFinderLiveConnectMicPKForegroundGiftLogic : NSObject
{
    CDUnknownBlockType _onContainerViewSetup;
    MMFinderLiveRewardGiftItem *_giftItem;
    MMFinderLiveTaskId *_liveTaskId;
    MMFinderLiveConnectMicPKForegroundGiftContainerView *_giftContainerView;
    NSMutableDictionary *_giftId2PercentCacheMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *giftId2PercentCacheMap; // @synthesize giftId2PercentCacheMap=_giftId2PercentCacheMap;
@property(retain, nonatomic) MMFinderLiveConnectMicPKForegroundGiftContainerView *giftContainerView; // @synthesize giftContainerView=_giftContainerView;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(copy, nonatomic) CDUnknownBlockType onContainerViewSetup; // @synthesize onContainerViewSetup=_onContainerViewSetup;
- (void)onLiveViewConnectMicViewFrameChanged:(id)arg1 newConnectMicViewFrame:(struct CGRect)arg2;
- (void)onLiveViewCdnPlayerViewFrameChanged:(id)arg1 newCdnPlayerViewFrame:(struct CGRect)arg2;
- (void)onLiveViewMainVideoViewFrameChanged:(id)arg1 newVideoViewFrame:(struct CGRect)arg2;
- (void)onLiveTask:(id)arg1 SEIMicMsgInfoUpdated:(id)arg2 listChanged:(_Bool)arg3;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (void)onSingleAttackGiftDidFinishRender:(id)arg1 attackUsername:(id)arg2;
- (void)onFetchRewardGiftListWithLiveTaskId:(id)arg1 liveGiftItems:(id)arg2;
- (void)createForegroundViewIfNeeded;
- (unsigned long long)giftItemRealResourceMemoryCacheOptions:(id)arg1;
- (void)findForegroundGiftItemInList:(id)arg1;
- (void)updateForegroundHeightPercent:(unsigned int)arg1 giftId:(id)arg2 username:(id)arg3;
- (void)refreshForegroundView;
- (void)dealloc;
- (void)clear;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

