//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CheckHoneyUserReq;
@protocol WCPayCheckHoneyUserCgiDelegate;

@interface WCPayCheckHoneyUserCgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayCheckHoneyUserCgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) CheckHoneyUserReq *request; // @dynamic request;

@end

