//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFansGroupSignView, MMFinderLiveGlobalRankSignView, MMFinderLiveNormalTextSignView, WCFinderMsgSessionBadgeLabel, WCFinderMsgSessionUserTagLabel;

@interface WCFinderMsgSessionBadgeGroupView
{
    MMFinderLiveGlobalRankSignView *_rankSignView;
    MMFinderLiveFansGroupSignView *_fansGroupSignView;
    MMFinderLiveNormalTextSignView *_buySignView;
    MMFinderLiveNormalTextSignView *_frequentWatchSignView;
    MMFinderLiveNormalTextSignView *_followerSignView;
    WCFinderMsgSessionBadgeLabel *_badgeLabel;
    WCFinderMsgSessionUserTagLabel *_userTagLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMsgSessionUserTagLabel *userTagLabel; // @synthesize userTagLabel=_userTagLabel;
@property(retain, nonatomic) WCFinderMsgSessionBadgeLabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(retain, nonatomic) MMFinderLiveNormalTextSignView *followerSignView; // @synthesize followerSignView=_followerSignView;
@property(retain, nonatomic) MMFinderLiveNormalTextSignView *frequentWatchSignView; // @synthesize frequentWatchSignView=_frequentWatchSignView;
@property(retain, nonatomic) MMFinderLiveNormalTextSignView *buySignView; // @synthesize buySignView=_buySignView;
@property(retain, nonatomic) MMFinderLiveFansGroupSignView *fansGroupSignView; // @synthesize fansGroupSignView=_fansGroupSignView;
@property(retain, nonatomic) MMFinderLiveGlobalRankSignView *rankSignView; // @synthesize rankSignView=_rankSignView;
- (void)flexLayoutSubviews;
- (void)updateFollowerBadgeInfo:(id)arg1;
- (void)updateFrequentWatchBadgeInfo:(id)arg1;
- (void)updateBuyBadgeInfo:(id)arg1;
- (void)updateBadgeLabelViewModel:(id)arg1;
- (void)updateSignUIStateInfo:(id)arg1 hasFollowMe:(_Bool)arg2 followMyMembership:(_Bool)arg3;
- (void)updateRankSignViewModel:(id)arg1;
- (void)setupObserver;
- (id)init;

@end

