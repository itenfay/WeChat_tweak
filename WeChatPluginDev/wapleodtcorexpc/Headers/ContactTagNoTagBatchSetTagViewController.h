//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactTagNoTagBatchMaskBottomView, ContactTagNoTagBatchSetEditLogic, NSArray, NSString, UIButton;
@protocol ContactTagNoTagBatchSetTagViewControllerDelegate;

@interface ContactTagNoTagBatchSetTagViewController
{
    _Bool _bIsNeedReloadView;
    _Bool isAlreadyDisMissSelf;
    ContactTagNoTagBatchSetEditLogic *m_editLogic;
    UIButton *m_oMakeSureButton;
    _Bool _needReloadWhenAppear;
    unsigned int _m_uiFromScene;
    NSArray *m_arrContactUserName;
    ContactTagNoTagBatchMaskBottomView *m_bottomView;
    id <ContactTagNoTagBatchSetTagViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ContactTagNoTagBatchSetTagViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool needReloadWhenAppear; // @synthesize needReloadWhenAppear=_needReloadWhenAppear;
@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene=_m_uiFromScene;
@property(retain, nonatomic) ContactTagNoTagBatchMaskBottomView *m_bottomView; // @synthesize m_bottomView;
@property(retain, nonatomic) NSArray *m_arrContactUserName; // @synthesize m_arrContactUserName;
- (void)onKeyboardNotification:(id)arg1 isShowKeyboard:(_Bool)arg2;
- (void)onKeyboardNotificationWithoutAnimation:(id)arg1 isShowKeyboard:(_Bool)arg2;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)didPopViewController;
- (void)onJobForTagEditRet:(int)arg1;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onAllContactLabelUpdated:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)reloadAllTags;
- (void)buildAllTagsData:(id)arg1;
- (id)getAllTagNameList;
- (void)onDeleteButtonFromTagEditView:(id)arg1;
- (void)onAddButtonFromTagEditView:(id)arg1;
- (void)onDeleteButtonFromTagTableView:(id)arg1;
- (void)onAddButtonFromTagTableView:(id)arg1;
- (void)onEditTags;
- (void)onCreateNewTagToTagTableView:(id)arg1;
- (void)didClickMakeSureButton;
- (void)OnMyCancel;
- (void)resetMakeSureButtonenabled;
- (id)getArrSelectTagNameList;
- (void)resetTagEditViewAndTableView;
- (void)onTextFieldMoved:(id)arg1;
- (id)genFavTagTableView;
- (id)genFavTagEditView;
- (void)changeDisplayView:(_Bool)arg1;
- (void)initMakeSureButton;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (void)initView;
- (void)initRegister;
- (void)initData;
- (void)viewDidAppear:(_Bool)arg1;
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

