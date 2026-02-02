//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetUserSwitchRequest;
@protocol WXGameGetUserSwitchCGIDelegate;

@interface WXGameGetUserSwitchCGI
{
    id <WXGameGetUserSwitchCGIDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WXGameGetUserSwitchCGIDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) GetUserSwitchRequest *request; // @dynamic request;

@end

