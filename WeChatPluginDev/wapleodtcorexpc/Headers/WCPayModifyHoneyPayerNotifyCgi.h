//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ModifyHoneyPayerNotifyReq;
@protocol WCPayModifyHoneyPayerNotifyCgiDelegate;

@interface WCPayModifyHoneyPayerNotifyCgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayModifyHoneyPayerNotifyCgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) ModifyHoneyPayerNotifyReq *request; // @dynamic request;

@end

