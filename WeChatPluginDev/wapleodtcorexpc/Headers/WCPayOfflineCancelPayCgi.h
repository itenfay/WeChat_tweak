//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCPayOfflineCancelPayCgiDelegate;

@interface WCPayOfflineCancelPayCgi
{
    unsigned int _payChannel;
    id <WCPayOfflineCancelPayCgiDelegate> _cgiDelegate;
    NSString *_req_Key;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int payChannel; // @synthesize payChannel=_payChannel;
@property(retain, nonatomic) NSString *req_Key; // @synthesize req_Key=_req_Key;
@property(nonatomic) __weak id <WCPayOfflineCancelPayCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)callErrorDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)startRequest;
- (id)init;

@end

