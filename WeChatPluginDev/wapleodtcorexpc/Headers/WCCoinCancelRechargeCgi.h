//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CancelWecoinRechargeRequest;

@interface WCCoinCancelRechargeCgi
{
}

- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)init;

// Remaining properties
@property(retain, nonatomic) CancelWecoinRechargeRequest *request; // @dynamic request;

@end

