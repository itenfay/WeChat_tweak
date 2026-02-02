//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPreloadProviderDelegate;

@interface WCPreloadProvider
{
    _Bool isWorking;
    unsigned long long uiClientLatestID;
    id <WCPreloadProviderDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPreloadProviderDelegate> delegate; // @synthesize delegate;
- (void)preloadHeadWithLatestID:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)responseForSnsTimeLineResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)requestForSnsTimeLineRequest:(id)arg1 minID:(id)arg2 lastRequestTime:(unsigned int)arg3;
- (int)getNetworkType;
- (id)converListToList:(id)arg1;
- (void)dealloc;
- (id)init;

@end

