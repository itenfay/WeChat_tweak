//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetHoneyPayCardReq;
@protocol WCPayGetHoneyPayCardCgiDelegate;

@interface WCPayGetHoneyPayCardCgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayGetHoneyPayCardCgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) GetHoneyPayCardReq *request; // @dynamic request;

@end

