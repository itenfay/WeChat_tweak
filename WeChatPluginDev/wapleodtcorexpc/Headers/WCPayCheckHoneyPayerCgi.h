//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CheckHoneyPayerReq;
@protocol WCPayCheckHoneyPayerCgiDelegate;

@interface WCPayCheckHoneyPayerCgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayCheckHoneyPayerCgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) CheckHoneyPayerReq *request; // @dynamic request;

@end

