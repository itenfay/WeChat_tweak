//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CreateHoneyPayCardReq;
@protocol WCPayCreateHoneyPayCardCgiDelegate;

@interface WCPayCreateHoneyPayCardCgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayCreateHoneyPayCardCgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) CreateHoneyPayCardReq *request; // @dynamic request;

@end

