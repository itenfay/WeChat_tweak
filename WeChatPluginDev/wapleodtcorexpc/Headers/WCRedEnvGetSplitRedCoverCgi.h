//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCRedEnvGetSplitRedCoverCgiDelegate;

@interface WCRedEnvGetSplitRedCoverCgi
{
    id <WCRedEnvGetSplitRedCoverCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCRedEnvGetSplitRedCoverCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (unsigned long long)getCgiNewDNSBusinessType;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

