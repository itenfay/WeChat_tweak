//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString, UINavigationController, UIView, WCMomentsPostReportSession, WCSelectorView;
@protocol ContactsSelectorControllerDelegate, SelectorControllerDelegate;

@interface ContactsSelectorController
{
    NSMutableArray *_arrFilteredContacts;
    NSMutableArray *_arrContacts;
    WCSelectorView *_selectorView;
    NSMutableDictionary *_dicContactItemDeleteView;
    UINavigationController *_navigationController;
    id <SelectorControllerDelegate> _delegate;
    id <ContactsSelectorControllerDelegate> _selectDelegate;
    _Bool _hasSelectCountLimit;
    unsigned int _selectCountLimit;
    _Bool _togetherEnabled;
    NSString *_subtitle;
    NSString *_selectContactVCTitleText;
    NSString *_headerBarText;
    UIView *_customContactListFooterView;
    NSString *_noResultTipText;
    long long _contactsSelectorType;
    WCMomentsPostReportSession *_postReportSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMomentsPostReportSession *postReportSession; // @synthesize postReportSession=_postReportSession;
@property(nonatomic) long long contactsSelectorType; // @synthesize contactsSelectorType=_contactsSelectorType;
@property(retain, nonatomic) NSString *noResultTipText; // @synthesize noResultTipText=_noResultTipText;
@property(retain, nonatomic) UIView *customContactListFooterView; // @synthesize customContactListFooterView=_customContactListFooterView;
@property(copy, nonatomic) NSString *headerBarText; // @synthesize headerBarText=_headerBarText;
@property(copy, nonatomic) NSString *selectContactVCTitleText; // @synthesize selectContactVCTitleText=_selectContactVCTitleText;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) _Bool togetherEnabled; // @synthesize togetherEnabled=_togetherEnabled;
@property(nonatomic) unsigned int selectCountLimit; // @synthesize selectCountLimit=_selectCountLimit;
@property(nonatomic) _Bool hasSelectCountLimit; // @synthesize hasSelectCountLimit=_hasSelectCountLimit;
@property(nonatomic) __weak id <ContactsSelectorControllerDelegate> selectDelegate; // @synthesize selectDelegate=_selectDelegate;
@property(nonatomic) __weak id <SelectorControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) WCSelectorView *selectorView; // @synthesize selectorView=_selectorView;
@property(retain, nonatomic) NSMutableArray *arrContacts; // @synthesize arrContacts=_arrContacts;
@property(retain, nonatomic) NSMutableArray *arrFilteredContacts; // @synthesize arrFilteredContacts=_arrFilteredContacts;
- (void)onClickDeleteButton:(id)arg1 withContact:(id)arg2;
- (void)onClickHeadImage:(id)arg1 withContact:(id)arg2;
- (id)sessionSelectController:(id)arg1 alertMessageForExceedingMaxSelectionCount:(unsigned long long)arg2;
- (void)onSessionSelectController:(id)arg1 prepareMultiSelectContactsViewController:(id)arg2;
- (void)onSessionSelectControllerDidPresent:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)onMultiSelectContactCancelForSns;
- (void)onMultiSelectContactReturnForSns:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onClickWholeView;
- (_Bool)shouldShowDeleteView;
- (struct CGSize)sizeForViews;
- (id)viewAtIndex:(unsigned long long)arg1;
- (unsigned long long)numbersOfViews;
- (void)didCancelSelectingContacts;
- (void)didSelectContacts:(id)arg1;
- (void)showTogetherGuideViewIfNeededInView:(id)arg1;
- (void)showSessionSelectController;
- (void)setupMutiSelectContactViewControllerInSessionSelectController:(id)arg1;
- (void)commonSetupMutiSelectContactViewController:(id)arg1;
- (void)showMutiSelectContactViewController;
- (void)addContact;
- (id)init;
- (id)getViewController;
- (void)removeContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

