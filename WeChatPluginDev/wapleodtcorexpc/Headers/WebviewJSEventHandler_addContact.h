//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebAddContactView;

@interface WebviewJSEventHandler_addContact
{
    MMWebAddContactView *m_jsAddContactView;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)currentViewController;
- (void)OnWebAddContactReturn;
- (void)OnWebAddContact:(int)arg1 Msg:(id)arg2 CallBack:(id)arg3;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

