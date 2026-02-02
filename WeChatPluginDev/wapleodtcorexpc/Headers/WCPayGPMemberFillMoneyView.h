//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMTableView, MMUIButton, MMUILabel, MMUIView, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIImageView, UITextField, WCPayGPMemberFillMoneyCell;

@interface WCPayGPMemberFillMoneyView
{
    _Bool _bIsFromImportSolitaire;
    _Bool _bIsSearching;
    unsigned int _maxSelectMember;
    MMTableView *_tableView;
    CContact *_chatroomContact;
    NSArray *_chatroomMemberList;
    NSMutableArray *_selectedContacts;
    NSArray *_outExistContact;
    NSMutableDictionary *_userPayAmountDict;
    unsigned long long _maxPerAmount;
    unsigned long long _maxTotalAmount;
    WCPayGPMemberFillMoneyCell *_currentEditingCell;
    NSMutableArray *_invalidAmountContacts;
    unsigned long long _launchScene;
    unsigned long long _openImCount;
    NSDictionary *_commentDict;
    MMUIView *_topBarView;
    UIImageView *_searchIconImgView;
    UITextField *_searchTextField;
    NSArray *_searchResultContacts;
    MMUIView *_toolBarView;
    MMUIButton *_cleanUpBtn;
    MMUILabel *_totalAmountLabel;
    WCPayGPMemberFillMoneyCell *_prototypeCell;
    CDUnknownBlockType _onCancelSelectMember;
    CDUnknownBlockType _onFinishSelectMember;
    CDUnknownBlockType _onMemberSelectChange;
    CDUnknownBlockType _showParamInvalidTips;
    CDUnknownBlockType _hideParamInvalidTips;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType hideParamInvalidTips; // @synthesize hideParamInvalidTips=_hideParamInvalidTips;
@property(copy, nonatomic) CDUnknownBlockType showParamInvalidTips; // @synthesize showParamInvalidTips=_showParamInvalidTips;
@property(copy, nonatomic) CDUnknownBlockType onMemberSelectChange; // @synthesize onMemberSelectChange=_onMemberSelectChange;
@property(copy, nonatomic) CDUnknownBlockType onFinishSelectMember; // @synthesize onFinishSelectMember=_onFinishSelectMember;
@property(copy, nonatomic) CDUnknownBlockType onCancelSelectMember; // @synthesize onCancelSelectMember=_onCancelSelectMember;
@property(retain, nonatomic) WCPayGPMemberFillMoneyCell *prototypeCell; // @synthesize prototypeCell=_prototypeCell;
@property(retain, nonatomic) MMUILabel *totalAmountLabel; // @synthesize totalAmountLabel=_totalAmountLabel;
@property(retain, nonatomic) MMUIButton *cleanUpBtn; // @synthesize cleanUpBtn=_cleanUpBtn;
@property(retain, nonatomic) MMUIView *toolBarView; // @synthesize toolBarView=_toolBarView;
@property(retain, nonatomic) NSArray *searchResultContacts; // @synthesize searchResultContacts=_searchResultContacts;
@property(nonatomic) _Bool bIsSearching; // @synthesize bIsSearching=_bIsSearching;
@property(retain, nonatomic) UITextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(retain, nonatomic) UIImageView *searchIconImgView; // @synthesize searchIconImgView=_searchIconImgView;
@property(retain, nonatomic) MMUIView *topBarView; // @synthesize topBarView=_topBarView;
@property(nonatomic) _Bool bIsFromImportSolitaire; // @synthesize bIsFromImportSolitaire=_bIsFromImportSolitaire;
@property(retain, nonatomic) NSDictionary *commentDict; // @synthesize commentDict=_commentDict;
@property(nonatomic) unsigned long long openImCount; // @synthesize openImCount=_openImCount;
@property(nonatomic) unsigned long long launchScene; // @synthesize launchScene=_launchScene;
@property(retain, nonatomic) NSMutableArray *invalidAmountContacts; // @synthesize invalidAmountContacts=_invalidAmountContacts;
@property(nonatomic) __weak WCPayGPMemberFillMoneyCell *currentEditingCell; // @synthesize currentEditingCell=_currentEditingCell;
@property(nonatomic) unsigned long long maxTotalAmount; // @synthesize maxTotalAmount=_maxTotalAmount;
@property(nonatomic) unsigned long long maxPerAmount; // @synthesize maxPerAmount=_maxPerAmount;
@property(nonatomic) unsigned int maxSelectMember; // @synthesize maxSelectMember=_maxSelectMember;
@property(retain, nonatomic) NSMutableDictionary *userPayAmountDict; // @synthesize userPayAmountDict=_userPayAmountDict;
@property(retain, nonatomic) NSArray *outExistContact; // @synthesize outExistContact=_outExistContact;
@property(retain, nonatomic) NSMutableArray *selectedContacts; // @synthesize selectedContacts=_selectedContacts;
@property(retain, nonatomic) NSArray *chatroomMemberList; // @synthesize chatroomMemberList=_chatroomMemberList;
@property(retain, nonatomic) CContact *chatroomContact; // @synthesize chatroomContact=_chatroomContact;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (_Bool)checkIfContactDisableEdit:(id)arg1;
- (void)hidePerAmountInvalidTipsWithContact:(id)arg1;
- (void)handlePerAmountInvalidTipsWithContact:(id)arg1;
- (_Bool)checkIfSelectedMemberLargeThanMax;
- (void)doChatRoomSearch:(id)arg1;
- (void)removeSelectContact:(id)arg1;
- (_Bool)isContactSelected:(id)arg1;
- (_Bool)isOpenIMMemberCell:(id)arg1;
- (id)getContactAtIndexPath:(id)arg1;
- (void)finishSelectMember;
- (void)cancelSaveSelectedMember;
- (void)cancelSelectMember;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (void)updateContentStatus;
- (id)getTotalAmonutString;
- (void)confirmToCleanUp;
- (void)cancelToCleanup;
- (void)cleanUpBtnPress:(id)arg1;
- (void)setupToolBarContent;
- (void)cellTextFieldKeyboardPressNextBtn:(id)arg1;
- (void)cellTextFieldKeyboardPressPreviousBtn:(id)arg1;
- (void)cellTextFieldDidEndEdittingWithCell:(id)arg1 withContact:(id)arg2 withValue:(double)arg3;
- (void)cellTextFieldDidChangeWithCell:(id)arg1 withContact:(id)arg2 withValue:(double)arg3;
- (void)cellTextFieldWillBeginEdittingWithCell:(id)arg1 withContact:(id)arg2;
- (_Bool)cellTextFieldShouldBeginEdittingWithCell:(id)arg1 withContact:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateContentTableViewTopInset:(double)arg1;
- (id)makeTipsHeaderView;
- (void)setupContentView;
- (void)setupData;
- (void)layoutSubviews;
- (void)refreshContentViewWithChatroomContact:(id)arg1 selectedContactArray:(id)arg2 userPayAmountDict:(id)arg3 launchScene:(unsigned long long)arg4 extContactList:(id)arg5 commentDict:(id)arg6 fromImportSolitaire:(_Bool)arg7;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

