//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class SetUserSwitchRequest;
@protocol WXGameSetUserSwitchCGIDelegate;

@interface WXGameSetUserSwitchCGI
{
    id <WXGameSetUserSwitchCGIDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WXGameSetUserSwitchCGIDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) SetUserSwitchRequest *request; // @dynamic request;

@end

