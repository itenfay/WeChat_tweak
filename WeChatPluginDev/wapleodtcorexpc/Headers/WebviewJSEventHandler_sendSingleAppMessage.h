//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, JSApiSelectContactsViewController, JSApiSelectSessionViewController, JSEvent, NSString;

@interface WebviewJSEventHandler_sendSingleAppMessage
{
    JSApiSelectSessionViewController *m_oSelectSessionViewController;
    JSApiSelectContactsViewController *m_oSelectContactViewController;
    JSEvent *m_oJSEvent;
    CContact *m_oSelectedContact;
    NSString *m_nsAppid;
}

- (void).cxx_destruct;
- (void)sendAppMessage;
- (void)getBizUserOpenIdRequest;
- (void)handleBizResponseCGIWrap:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnJSApiSelectSessionViewControllerNewSession;
- (void)OnJSApiSelectSessionViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (_Bool)OnJSApiSelectSessionViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectSessionViewControllerBack;
- (void)OnJSApiSelectContactsViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (_Bool)OnJSApiSelectContactsViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectContactsViewControllerBack;
- (void)dealloc;
- (void)confirmEndJSEvent;
- (void)cancelEndJSEnvent;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

