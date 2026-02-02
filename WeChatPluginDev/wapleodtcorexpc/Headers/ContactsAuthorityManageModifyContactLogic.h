//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactBatchModifyLogic, ContactTagData, MMUIViewController, NSMutableDictionary, NSString, WCFinderBatchModContactTypeTask;
@protocol ContactsAuthorityManageModifyContactLogicDelegate;

@interface ContactsAuthorityManageModifyContactLogic
{
    ContactBatchModifyLogic *m_contactBatchModifyLogic;
    WCFinderBatchModContactTypeTask *m_finderBatchContactTask;
    NSMutableDictionary *m_dicMultiSelect;
    NSMutableDictionary *m_dicExistContact;
    NSMutableDictionary *m_dicHandleMultiSelect;
    MMUIViewController *m_currentViewController;
    long long m_contactsAuthorityManageModifyAction;
    id <ContactsAuthorityManageModifyContactLogicDelegate> _delegate;
    ContactTagData *_m_contactTagData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ContactTagData *m_contactTagData; // @synthesize m_contactTagData=_m_contactTagData;
@property(nonatomic) __weak id <ContactsAuthorityManageModifyContactLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long m_contactsAuthorityManageModifyAction; // @synthesize m_contactsAuthorityManageModifyAction;
@property(retain, nonatomic) MMUIViewController *m_currentViewController; // @synthesize m_currentViewController;
@property(retain, nonatomic) NSMutableDictionary *m_dicHandleMultiSelect; // @synthesize m_dicHandleMultiSelect;
@property(retain, nonatomic) NSMutableDictionary *m_dicExistContact; // @synthesize m_dicExistContact;
@property(retain, nonatomic) NSMutableDictionary *m_dicMultiSelect; // @synthesize m_dicMultiSelect;
- (void)modLocalWowData;
- (void)onAllRequestColikeBlockEnd:(long long)arg1 sucCount:(long long)arg2 failCount:(long long)arg3 failInfo:(id)arg4;
- (void)finderBatchModContactTypeTask:(id)arg1 finishWithSuccessNames:(id)arg2 failedNames:(id)arg3 allSuccess:(_Bool)arg4;
- (void)OnContactBatchModifySnsNointeresting:(id)arg1 resultFlag:(_Bool)arg2;
- (void)handelWeRunBlackContactBatchModify:(id)arg1 withRet:(unsigned int)arg2 errorMsg:(id)arg3 isNetWorkError:(_Bool)arg4;
- (void)handelSnsBlackContactBatchModify:(id)arg1 withRet:(unsigned int)arg2 errorMsg:(id)arg3 isNetWorkError:(_Bool)arg4;
- (void)handelSocialBlackContactBatchModify:(id)arg1 withRet:(unsigned int)arg2 errorMsg:(id)arg3 isNetWorkError:(_Bool)arg4;
- (void)OnContactBatchModify:(id)arg1 withRet:(unsigned int)arg2 errorMsg:(id)arg3 isNetWorkError:(_Bool)arg4;
- (void)reloadAuthorityDetailModifyFailContact:(id)arg1;
- (void)batchRemoveWeRunBlackContactType;
- (void)batchAddWeRunBlackContactType;
- (void)batchRemoveWowBlockContactType;
- (void)batchAddWowBlockContactType;
- (void)batchRemoveWowHideContactType;
- (void)batchAddWowHideContactType;
- (void)batchRemoveFinderOutsideContactType;
- (void)batchAddFinderOutsideContactType;
- (void)batchRemoveFinderBlackContactType;
- (void)batchAddFinderBlackContactType;
- (void)batchRemoveSnsNointerestingContactType;
- (void)batchAddSnsNointerestingContactType;
- (void)batchRemoveSnsBlackContactType;
- (void)batchAddSnsBlackContactType;
- (void)batchRemoveSocialBlackContactType;
- (void)batchAddSocialBlackContactType;
- (id)getTipSuccessTitle;
- (void)reCallModify;
- (id)getCurrentViewController;
- (id)getContactBatchModifyLogic;
- (void)modifyAuthorityDetailDeleteContactWithDicMultiSelect:(id)arg1 andDicExistContact:(id)arg2 currentViewController:(id)arg3;
- (void)modifyAuthorityDetailDeleteContactWithDicMultiSelect:(id)arg1 andDicExistContact:(id)arg2;
- (void)modifyAuthorityDetailAddContactWithDicMultiSelect:(id)arg1 andDicExistContact:(id)arg2 currentViewController:(id)arg3;
- (void)modifyAuthorityDetailAddContactWithDicMultiSelect:(id)arg1 andDicExistContact:(id)arg2;
- (void)initData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

