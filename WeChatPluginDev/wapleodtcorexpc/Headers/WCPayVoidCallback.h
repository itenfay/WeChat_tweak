//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayVoidCallbackDelegate;

@interface WCPayVoidCallback
{
    id <WCPayVoidCallbackDelegate> _m_delegate;
    id _m_userInfo;
}

- (void).cxx_destruct;
@property(retain) id m_userInfo; // @synthesize m_userInfo=_m_userInfo;
@property __weak id <WCPayVoidCallbackDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)call;
- (id)initWithDelegate:(id)arg1 userInfo:(id)arg2;

@end

