//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSMutableSet, NSString, UIColor;
@protocol SelectSubContactViewControllerDelegate;

@interface SelectSubContactViewController
{
    _Bool _isMultiSelect;
    _Bool _showsChatroomMembers;
    _Bool _isInPageSheetMode;
    id <SelectSubContactViewControllerDelegate> _delegate;
    MMTableView *_tableView;
    NSMutableArray *_selectedContacts;
    NSString *_currentChatName;
    long long _userInterfaceStyle;
    UIColor *_brandColor;
    unsigned long long _overrideOrientationMask;
    NSMutableSet *_selectedUsernames;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *selectedUsernames; // @synthesize selectedUsernames=_selectedUsernames;
@property(nonatomic) unsigned long long overrideOrientationMask; // @synthesize overrideOrientationMask=_overrideOrientationMask;
@property(nonatomic) _Bool isInPageSheetMode; // @synthesize isInPageSheetMode=_isInPageSheetMode;
@property(retain, nonatomic) UIColor *brandColor; // @synthesize brandColor=_brandColor;
@property(nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(nonatomic) _Bool showsChatroomMembers; // @synthesize showsChatroomMembers=_showsChatroomMembers;
@property(nonatomic) _Bool isMultiSelect; // @synthesize isMultiSelect=_isMultiSelect;
@property(retain, nonatomic) NSString *currentChatName; // @synthesize currentChatName=_currentChatName;
@property(retain, nonatomic) NSMutableArray *selectedContacts; // @synthesize selectedContacts=_selectedContacts;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <SelectSubContactViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldShowChatroomMembers:(id)arg1;
- (void)deselectSessionContact:(id)arg1;
- (void)selectSessionContact:(id)arg1;
- (_Bool)isSessionSelected:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onCancel;
- (void)onSelectedContactsChange;
- (id)contactAtIndex:(long long)arg1;
- (long long)numberOfSessions;
- (id)viewControllerTitle;
- (id)navigationBarBackgroundColor;
- (void)initUI;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLoad;
- (id)init;
- (id)initWithSelectedUsernames:(id)arg1;
- (void)onCancelInPageSheetMode:(id)arg1;
- (double)getVisibleHeight;
- (double)getContentViewY;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (void)initLeftBarItemInPageSheetModeIfNeeded;
- (void)setTitleInPageSheetModeIfNeeded:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

