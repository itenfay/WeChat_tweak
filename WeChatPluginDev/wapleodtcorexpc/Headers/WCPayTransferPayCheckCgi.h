//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CgiTransferPayCheckReq;
@protocol WCPayTransferPayCheckCgiDelegate;

@interface WCPayTransferPayCheckCgi
{
    id <WCPayTransferPayCheckCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayTransferPayCheckCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)initWithDelegate:(id)arg1 request:(id)arg2;

// Remaining properties
@property(retain, nonatomic) CgiTransferPayCheckReq *request; // @dynamic request;

@end

