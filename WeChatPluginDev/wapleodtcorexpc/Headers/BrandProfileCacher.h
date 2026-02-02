//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString, WCEliminatedSlotMMKV;

@interface BrandProfileCacher
{
    _Bool _needShowRecommendFollowView;
    WCEliminatedSlotMMKV *_bizProfileSlotKV;
    NSMutableSet *_needShowRecommendFollowSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *needShowRecommendFollowSet; // @synthesize needShowRecommendFollowSet=_needShowRecommendFollowSet;
@property(nonatomic) _Bool needShowRecommendFollowView; // @synthesize needShowRecommendFollowView=_needShowRecommendFollowView;
@property(retain, nonatomic) WCEliminatedSlotMMKV *bizProfileSlotKV; // @synthesize bizProfileSlotKV=_bizProfileSlotKV;
- (void)onDeleteSessionOfUser:(id)arg1;
- (id)getClickCommendCookie:(id)arg1;
- (void)updateClickCommendCookie:(id)arg1 forUsername:(id)arg2;
- (_Bool)checkNeedToShowRecommendFollowView;
- (void)markNeedToShowRecommendFollowView:(_Bool)arg1;
- (void)checkOverwriteRespOnFeatureMsg:(id)arg1 withCacheItem:(id)arg2;
- (_Bool)writeProfileCacheItem:(id)arg1 forBrand:(id)arg2;
- (id)readProfileCacheItemForBrand:(id)arg1;
- (_Bool)shouldShowRecommendFollowViewForUsername:(id)arg1;
- (void)markBrandUsername:(id)arg1 needToShowRecommendFollowView:(_Bool)arg2;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

