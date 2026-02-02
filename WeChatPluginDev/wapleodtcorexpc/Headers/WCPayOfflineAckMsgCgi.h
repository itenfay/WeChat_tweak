//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCPayOfflineAckMsgCgiDelegate;

@interface WCPayOfflineAckMsgCgi
{
    _Bool _bIsProcessed;
    _Bool _bIsPosEnabled;
    _Bool _bIsMsgFromPull;
    int _payMsgType;
    NSString *_ack_key;
    NSString *_req_key;
    NSString *_transId;
    id <WCPayOfflineAckMsgCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayOfflineAckMsgCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
@property(nonatomic) _Bool bIsMsgFromPull; // @synthesize bIsMsgFromPull=_bIsMsgFromPull;
@property(nonatomic) _Bool bIsPosEnabled; // @synthesize bIsPosEnabled=_bIsPosEnabled;
@property(nonatomic) _Bool bIsProcessed; // @synthesize bIsProcessed=_bIsProcessed;
@property(retain, nonatomic) NSString *transId; // @synthesize transId=_transId;
@property(nonatomic) int payMsgType; // @synthesize payMsgType=_payMsgType;
@property(retain, nonatomic) NSString *req_key; // @synthesize req_key=_req_key;
@property(retain, nonatomic) NSString *ack_key; // @synthesize ack_key=_ack_key;
- (void)callErrorDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)startRequest;
- (id)init;

@end

