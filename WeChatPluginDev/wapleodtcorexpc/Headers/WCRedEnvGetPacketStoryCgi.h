//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCRedEnvGetPacketStoryCgiDelegate;

@interface WCRedEnvGetPacketStoryCgi
{
    id <WCRedEnvGetPacketStoryCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCRedEnvGetPacketStoryCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (unsigned long long)getCgiNewDNSBusinessType;
- (id)getLocalStoryInfo:(id)arg1;
- (void)saveStoryInfo:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didGetLocalResponse:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

