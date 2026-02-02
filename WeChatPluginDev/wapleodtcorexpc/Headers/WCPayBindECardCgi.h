//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BindECardReq;
@protocol WCPayBindECardCgiDelegate;

@interface WCPayBindECardCgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)failWithECardCgiError:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayBindECardCgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) BindECardReq *request; // @dynamic request;

@end

