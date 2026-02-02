//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUILabel, NSArray, NSString, OrderedDictionary, UIColor, UIView;
@protocol ContactSelectorViewControllerDelegate;

@interface ContactSelectorViewController
{
    _Bool _isMultiplyMode;
    NSArray *_contacts;
    OrderedDictionary *_selectedContacts;
    id <ContactSelectorViewControllerDelegate> _delegate;
    long long _userInterfaceStyle;
    UIColor *_brandColor;
    NSString *_blankTips;
    MMTableView *_tableView;
    UIView *_blankView;
    MMUILabel *_blankTipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *blankTipsLabel; // @synthesize blankTipsLabel=_blankTipsLabel;
@property(retain, nonatomic) UIView *blankView; // @synthesize blankView=_blankView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *blankTips; // @synthesize blankTips=_blankTips;
@property(retain, nonatomic) UIColor *brandColor; // @synthesize brandColor=_brandColor;
@property(nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(nonatomic) _Bool isMultiplyMode; // @synthesize isMultiplyMode=_isMultiplyMode;
@property(nonatomic) __weak id <ContactSelectorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) OrderedDictionary *selectedContacts; // @synthesize selectedContacts=_selectedContacts;
@property(copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateSelectionCell:(id)arg1 withContact:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)deselectContact:(id)arg1;
- (_Bool)selectContact:(id)arg1;
- (_Bool)isContactSelected:(id)arg1;
- (void)onCancel;
- (id)headerTitleInSection:(long long)arg1;
- (void)cancelBarButtonItemClicked:(id)arg1;
- (void)doneBarButtonItemClicked:(id)arg1;
- (void)loadBarItems;
- (void)layoutSelectorViews;
- (void)updateSelectorViews;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (id)initWithContacts:(id)arg1 selectedContacts:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

