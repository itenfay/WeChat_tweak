//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class QryHoneyUserDetailReq;
@protocol WCPayQryHoneyUserDetailCgiDelegate;

@interface WCPayQryHoneyUserDetailCgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayQryHoneyUserDetailCgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) QryHoneyUserDetailReq *request; // @dynamic request;

@end

