//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebAddContactView;

@interface WAJSEventHandler_private_addContact
{
    MMWebAddContactView *_addContactView;
}

- (void).cxx_destruct;
- (id)currentViewController;
- (void)OnWebAddContactReturn;
- (void)OnWebAddContact:(int)arg1 Msg:(id)arg2 CallBack:(id)arg3;
- (void)removeAllAddContactView;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)handleJSEvent:(id)arg1;

@end

