//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CgiUnionTransferPayCheckReq;
@protocol WCPayUnionTransferPayCheckCgiDelegate;

@interface WCPayUnionTransferPayCheckCgi
{
    id <WCPayUnionTransferPayCheckCgiDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(retain, nonatomic) CgiUnionTransferPayCheckReq *request;

@end

