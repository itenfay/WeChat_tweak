//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class QryHoneyPayCardDetailReq;
@protocol WCPayQryHoneyPayCardDetailCgiDelegate;

@interface WCPayQryHoneyPayCardDetailCgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayQryHoneyPayCardDetailCgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) QryHoneyPayCardDetailReq *request; // @dynamic request;

@end

