//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString, UITextField;
@protocol MMSayHelloViewControllerDelegate;

@interface MMSayHelloViewController
{
    UITextField *m_sayHelloTextView;
    NSString *m_helloContent;
    CContact *m_helloReceiver;
    unsigned int m_eventID;
    id <MMSayHelloViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMSayHelloViewControllerDelegate> delegate; // @synthesize delegate=m_delegate;
@property(retain, nonatomic) CContact *helloReceiver; // @synthesize helloReceiver=m_helloReceiver;
@property(retain, nonatomic) NSString *helloContent; // @synthesize helloContent=m_helloContent;
@property(retain, nonatomic) UITextField *sayHelloTextView; // @synthesize sayHelloTextView=m_sayHelloTextView;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)quitSayHello;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)onBeginEdit:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)onCancelSendSayHello;
- (void)onSendSayHello:(id)arg1;
- (_Bool)doSayHello:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

