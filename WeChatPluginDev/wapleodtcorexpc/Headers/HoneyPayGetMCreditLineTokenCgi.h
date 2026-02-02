//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetMCreditLineTokenSignReq;
@protocol HoneyPayGetMCreditLineTokenCgiDelegate;

@interface HoneyPayGetMCreditLineTokenCgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <HoneyPayGetMCreditLineTokenCgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) GetMCreditLineTokenSignReq *request; // @dynamic request;

@end

