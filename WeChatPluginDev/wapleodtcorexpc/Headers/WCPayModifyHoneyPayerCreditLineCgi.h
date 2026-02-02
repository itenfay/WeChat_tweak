//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ModifyHoneyPayerCreditLineReq;
@protocol WCPayModifyHoneyPayerCreditLineCgiDelegate;

@interface WCPayModifyHoneyPayerCreditLineCgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayModifyHoneyPayerCreditLineCgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) ModifyHoneyPayerCreditLineReq *request; // @dynamic request;

@end

