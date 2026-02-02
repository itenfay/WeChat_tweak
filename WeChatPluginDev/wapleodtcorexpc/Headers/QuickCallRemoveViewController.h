//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;
@protocol QuickCallRemoveViewControllerDelegate;

@interface QuickCallRemoveViewController
{
    NSArray *_contacts;
    id <QuickCallRemoveViewControllerDelegate> _removeDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <QuickCallRemoveViewControllerDelegate> removeDelegate; // @synthesize removeDelegate=_removeDelegate;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (void)onDone:(id)arg1;
- (void)onSelectedContactsChange;
- (id)contactAtIndex:(long long)arg1;
- (long long)numberOfSessions;
- (id)viewControllerTitle;
- (id)navigationBarBackgroundColor;
- (_Bool)showNavigationBarSepLine;
- (_Bool)shouldInteractiveDismiss;
- (void)viewDidLoad;
- (id)initWithContacts:(id)arg1 delegate:(id)arg2;

@end

