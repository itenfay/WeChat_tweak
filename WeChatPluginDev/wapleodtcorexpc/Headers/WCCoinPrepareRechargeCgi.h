//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class PrepareWecoinRechargeRequest, PrepareWecoinRechargeResponse;
@protocol WCCoinPrepareRechargeCgiDelegate;

@interface WCCoinPrepareRechargeCgi
{
    PrepareWecoinRechargeResponse *_response;
    id <WCCoinPrepareRechargeCgiDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCoinPrepareRechargeCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PrepareWecoinRechargeResponse *response; // @synthesize response=_response;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)init;

// Remaining properties
@property(retain, nonatomic) PrepareWecoinRechargeRequest *request; // @dynamic request;

@end

