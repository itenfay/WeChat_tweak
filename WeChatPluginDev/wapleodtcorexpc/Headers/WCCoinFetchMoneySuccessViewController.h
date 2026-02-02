//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EncashResultPageInfo, LiveRewardIncomeBizInfo;

@interface WCCoinFetchMoneySuccessViewController
{
    _Bool _fetchFromLiveStyle;
    unsigned long long _fetchAmount;
    LiveRewardIncomeBizInfo *_liveIncomeBizInfo;
    EncashResultPageInfo *_pageInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EncashResultPageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(retain, nonatomic) LiveRewardIncomeBizInfo *liveIncomeBizInfo; // @synthesize liveIncomeBizInfo=_liveIncomeBizInfo;
@property(nonatomic) _Bool fetchFromLiveStyle; // @synthesize fetchFromLiveStyle=_fetchFromLiveStyle;
@property(nonatomic) unsigned long long fetchAmount; // @synthesize fetchAmount=_fetchAmount;
- (_Bool)isFetchFromLiveStudio;
- (_Bool)isFetchFromLivePersonal;
- (id)detailModel;
- (id)dateStringFromTimestamp:(long long)arg1;
- (void)viewDidLoad;

@end

