//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MultiTalkJumpAppInfo, NSMutableDictionary, NSString, UIView;
@protocol ilinkMultiSelectContactsViewControllerDelegate;

@interface ilinkMultiSelectContactsViewController
{
    _Bool m_needToFixPanelViewLayout;
    _Bool _doNotShowContactsSelect;
    id <ilinkMultiSelectContactsViewControllerDelegate> _ilinkVCDelegate;
    long long _groupNum;
    MultiTalkJumpAppInfo *_jumpAppInfo;
    UIView *_headerView;
    MMUILabel *_contactTitle;
    NSMutableDictionary *_m_dicMultiSelect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *m_dicMultiSelect; // @synthesize m_dicMultiSelect=_m_dicMultiSelect;
@property(retain, nonatomic) MMUILabel *contactTitle; // @synthesize contactTitle=_contactTitle;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) MultiTalkJumpAppInfo *jumpAppInfo; // @synthesize jumpAppInfo=_jumpAppInfo;
@property(nonatomic) _Bool doNotShowContactsSelect; // @synthesize doNotShowContactsSelect=_doNotShowContactsSelect;
@property(nonatomic) long long groupNum; // @synthesize groupNum=_groupNum;
@property(nonatomic) __weak id <ilinkMultiSelectContactsViewControllerDelegate> ilinkVCDelegate; // @synthesize ilinkVCDelegate=_ilinkVCDelegate;
- (void)recoverSearchBar;
- (_Bool)searchTextFieldShouldBeginEditing;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)deleteSelectedOutsideChatRoomContact:(id)arg1;
- (void)addSelectedOutsideChatRoomContact:(id)arg1;
- (void)changeSearchBarLayoutToAdding;
- (void)onAddMemberPageForIlink;
- (void)initViewByIlinkStyle;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

