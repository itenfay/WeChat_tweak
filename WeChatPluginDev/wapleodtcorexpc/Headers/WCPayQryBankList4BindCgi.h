//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class QryBankList4BindReq;
@protocol WCPayQryBankList4BindCgiDelegate;

@interface WCPayQryBankList4BindCgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)failWithECardCgiError:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayQryBankList4BindCgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) QryBankList4BindReq *request; // @dynamic request;

@end

