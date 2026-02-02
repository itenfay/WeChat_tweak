//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ModifyHoneyPayerPayWayReq;
@protocol WCPayModifyHoneyPayerPayWayCgiDelegate;

@interface WCPayModifyHoneyPayerPayWayCgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayModifyHoneyPayerPayWayCgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) ModifyHoneyPayerPayWayReq *request; // @dynamic request;

@end

