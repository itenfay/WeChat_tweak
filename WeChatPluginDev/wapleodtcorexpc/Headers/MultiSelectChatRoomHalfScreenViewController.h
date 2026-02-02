//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactsDataLogic, MMTableView, MMUIButton, MMUISearchBar, MMUIView, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSString, OrderedDictionary, UIView;
@protocol MultiSelectChatRoomHalfScreenViewControllerDelegate;

@interface MultiSelectChatRoomHalfScreenViewController
{
    MMUIView *m_contentView;
    MMTableView *m_tableView;
    MMUISearchBar *m_searchBar;
    UIView *m_lineView;
    UIView *m_searchBarContainer;
    _Bool m_isInSearchState;
    NSMutableArray *m_arrFilterdFriends;
    NSMutableDictionary *m_dicMatchTips;
    MMUIButton *m_leftCloseButton;
    MMUIButton *m_rightMakeSureButton;
    NSArray *m_arrAllContact;
    NSMutableOrderedSet *m_setCanSelectContact;
    NSString *m_tipWord;
    NSString *m_choiseSessionWord;
    NSString *m_chatroomSessionWord;
    NSString *m_rightButtonWord;
    NSString *m_rightButtonLightColor;
    NSString *m_rightButtonDarkColor;
    NSArray *m_selectedUserNameList;
    unsigned int m_selectMaxCount;
    NSString *m_countExceedTipWord;
    _Bool m_forceLightMode;
    _Bool m_canSelectOpenIM;
    OrderedDictionary *m_dicMultiSelect;
    NSDictionary *m_dicExistContact;
    NSMutableDictionary *m_dicMultiSelectIndex;
    id <MultiSelectChatRoomHalfScreenViewControllerDelegate> _m_delegate;
    ContactsDataLogic *_m_contactsDataLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ContactsDataLogic *m_contactsDataLogic; // @synthesize m_contactsDataLogic=_m_contactsDataLogic;
@property(nonatomic) __weak id <MultiSelectChatRoomHalfScreenViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSMutableDictionary *m_dicMultiSelectIndex; // @synthesize m_dicMultiSelectIndex;
@property(retain, nonatomic) NSDictionary *m_dicExistContact; // @synthesize m_dicExistContact;
@property(retain, nonatomic) OrderedDictionary *m_dicMultiSelect; // @synthesize m_dicMultiSelect;
- (void)updateSearchBarColor;
- (void)traitCollectionDidChange:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)doSearch:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)makeSectionHeaderViewWithText:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2 tableView:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didSelectContact:(id)arg1;
- (void)updateRightMakeSureButton;
- (void)onClickMakeSureButton;
- (void)onClickLeftCloseButton;
- (id)getRightMakeSureColor;
- (_Bool)isSelected:(id)arg1;
- (_Bool)isExisted:(id)arg1;
- (id)getContactWithIndexPath:(id)arg1;
- (id)getContactsDataLogic;
- (_Bool)isContactSessionNumberOfRowsInSection:(long long)arg1;
- (_Bool)isMultiSelectSessionNumberOfRowsInSection:(long long)arg1;
- (void)layoutTopView;
- (void)layoutTableView;
- (id)getSearchBarTextField;
- (void)layoutSearchField;
- (void)layoutContentView;
- (void)layoutView;
- (long long)overrideUserInterfaceStyle;
- (void)initData;
- (void)viewDidLoad;
- (id)initWithTipWord:(id)arg1 choiseSessionWord:(id)arg2 chatroomSessionWord:(id)arg3 rightButtonWord:(id)arg4 rightButtonLightColor:(id)arg5 rightButtonDarkColor:(id)arg6 selectedUserNameList:(id)arg7 selectMaxCount:(unsigned int)arg8 countExceedTipWord:(id)arg9 forceLightMode:(_Bool)arg10 canSelectOpenIM:(_Bool)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

