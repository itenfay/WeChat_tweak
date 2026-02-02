//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetCreateTokenSignReq;
@protocol HoneyPayGetCreateTokenSignCgiDelegate;

@interface HoneyPayGetCreateTokenSignCgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <HoneyPayGetCreateTokenSignCgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) GetCreateTokenSignReq *request; // @dynamic request;

@end

