//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FeedsPreviewLiveMultiStyleInfo_StyleTwelve, FinderLiveSyncFeedPreviewMultiStyleInfoResp_RecommendCouponInfo, NSString;

@interface MMFinderLiveFeedStreamCarouselProductCouponItem
{
    FinderLiveSyncFeedPreviewMultiStyleInfoResp_RecommendCouponInfo *_couponBubble;
    FeedsPreviewLiveMultiStyleInfo_StyleTwelve *_couponStyleConf;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FeedsPreviewLiveMultiStyleInfo_StyleTwelve *couponStyleConf; // @synthesize couponStyleConf=_couponStyleConf;
@property(retain, nonatomic) FinderLiveSyncFeedPreviewMultiStyleInfoResp_RecommendCouponInfo *couponBubble; // @synthesize couponBubble=_couponBubble;
@property(readonly, copy) NSString *description;
- (id)itemIdentifier;
@property(readonly, nonatomic) unsigned long long uiStyle;
@property(readonly, nonatomic) unsigned long long duration;
@property(readonly, nonatomic) unsigned long long type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

