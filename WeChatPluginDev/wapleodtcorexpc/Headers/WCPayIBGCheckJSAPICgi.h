//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class PayIBGCheckJsapiSignReq;
@protocol WCPayIBGCheckJSAPICgiDelegate;

@interface WCPayIBGCheckJSAPICgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayIBGCheckJSAPICgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) PayIBGCheckJsapiSignReq *request; // @dynamic request;

@end

