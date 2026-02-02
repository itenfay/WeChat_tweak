//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class OpenECardReq;
@protocol WCPayOpenECardCgiDelegate;

@interface WCPayOpenECardCgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)failWithECardCgiError:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayOpenECardCgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) OpenECardReq *request; // @dynamic request;

@end

