//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class HoneyPayListReq;
@protocol WCPayHoneyPayListCgiDelegate;

@interface WCPayHoneyPayListCgi
{
}

- (void)cacheResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayHoneyPayListCgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) HoneyPayListReq *request; // @dynamic request;

@end

