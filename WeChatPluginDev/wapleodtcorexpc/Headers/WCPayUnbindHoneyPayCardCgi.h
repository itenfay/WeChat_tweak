//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UnbindHoneyPayCardReq;
@protocol WCPayUnbindHoneyPayCardCgiDelegate;

@interface WCPayUnbindHoneyPayCardCgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayUnbindHoneyPayCardCgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) UnbindHoneyPayCardReq *request; // @dynamic request;

@end

