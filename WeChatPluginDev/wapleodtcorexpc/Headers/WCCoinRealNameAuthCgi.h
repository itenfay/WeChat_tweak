//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WecoinRealNameAuthRequest;
@protocol WCCoinRealNameAuthCgiDelegate;

@interface WCCoinRealNameAuthCgi
{
    id <WCCoinRealNameAuthCgiDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCoinRealNameAuthCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)init;

// Remaining properties
@property(retain, nonatomic) WecoinRealNameAuthRequest *request; // @dynamic request;

@end

