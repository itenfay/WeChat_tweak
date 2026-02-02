//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSString, SnsObjectOpChangeVisibility, WCDataItem, WCMomentsPrivacyViewController, WCMomentsShareScopeViewController;

@interface WCMomentsShareScopeMgr : NSObject
{
    _Bool _isModifyShareScopeEnabled;
    _Bool _isRequestContactDataForOpening;
    _Bool _isRequestContactDataForModifying;
    _Bool _isModifyFromShareScopeVC;
    WCMomentsShareScopeViewController *_shareScopeVC;
    MMUIViewController *_shareScopeParentVC;
    WCDataItem *_openDataItem;
    WCMomentsPrivacyViewController *_privacyVC;
    WCDataItem *_modifyDataItem;
    SnsObjectOpChangeVisibility *_changeVisibilityOp;
    unsigned long long _modifyShareScopeEnterScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long modifyShareScopeEnterScene; // @synthesize modifyShareScopeEnterScene=_modifyShareScopeEnterScene;
@property(nonatomic) _Bool isModifyFromShareScopeVC; // @synthesize isModifyFromShareScopeVC=_isModifyFromShareScopeVC;
@property(nonatomic) _Bool isRequestContactDataForModifying; // @synthesize isRequestContactDataForModifying=_isRequestContactDataForModifying;
@property(retain, nonatomic) SnsObjectOpChangeVisibility *changeVisibilityOp; // @synthesize changeVisibilityOp=_changeVisibilityOp;
@property(retain, nonatomic) WCDataItem *modifyDataItem; // @synthesize modifyDataItem=_modifyDataItem;
@property(retain, nonatomic) WCMomentsPrivacyViewController *privacyVC; // @synthesize privacyVC=_privacyVC;
@property(nonatomic) _Bool isRequestContactDataForOpening; // @synthesize isRequestContactDataForOpening=_isRequestContactDataForOpening;
@property(retain, nonatomic) WCDataItem *openDataItem; // @synthesize openDataItem=_openDataItem;
@property(nonatomic) __weak MMUIViewController *shareScopeParentVC; // @synthesize shareScopeParentVC=_shareScopeParentVC;
@property(retain, nonatomic) WCMomentsShareScopeViewController *shareScopeVC; // @synthesize shareScopeVC=_shareScopeVC;
@property(nonatomic) _Bool isModifyShareScopeEnabled; // @synthesize isModifyShareScopeEnabled=_isModifyShareScopeEnabled;
- (void)resetEditBehaviorReporter;
- (void)onClickUserName:(id)arg1;
- (void)onClickTagGroup:(unsigned int)arg1;
- (id)shareScopeViewControllerGetPresentingVC:(id)arg1;
- (void)shareScopeViewController:(id)arg1 didClickModifyScopeButton:(id)arg2;
- (void)onUploadTaskDidFail:(id)arg1;
- (void)onSnsNewCommitFinished:(id)arg1 task:(id)arg2;
- (void)onModifyDataItemShareScopeFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onUpdateDataItemDetailFinished:(long long)arg1 itemId:(id)arg2 dataItem:(id)arg3;
- (void)onClickCell:(unsigned long long)arg1;
- (_Bool)privacyViewController:(id)arg1 canSelectPrivacySetting:(long long)arg2;
- (void)privacyViewControllerDidClickCancel:(id)arg1;
- (void)privacyViewController:(id)arg1 didSelectPrivacy:(long long)arg2 Contacts:(id)arg3 contactTags:(id)arg4 isAllContactsSelected:(_Bool)arg5;
- (unsigned long long)modifyShareScopeEnterSceneWithVC:(id)arg1;
- (void)_clearModifyShareScopeData;
- (void)_clearOpenShareScopeData;
- (void)_clearData;
- (_Bool)_isPrivacyChangedWithPrivacy:(long long)arg1 newTags:(id)arg2 newContacts:(id)arg3;
- (void)_handleUpdateDataItemDetailFinished:(long long)arg1 itemId:(id)arg2 dataItem:(id)arg3;
- (void)_handleModifyDataItemFinishedWithResult:(_Bool)arg1;
- (id)_createPrivacyParamsWithDataItem:(id)arg1;
- (void)_updatePrivacyVCWithDataItem:(id)arg1;
- (void)_onModifyPrvicyExceedLimitDuration;
- (void)_modifyShareScopeIfNeeded;
- (id)_changeVisibilityOpWithPrivacy:(long long)arg1 contactTags:(id)arg2 contacts:(id)arg3;
- (void)_openShareScopeWithDataItem:(id)arg1 isNeedForceUpdate:(_Bool)arg2;
- (void)modifyShareScopeWithDataItem:(id)arg1 viewController:(id)arg2;
- (void)openShareScopeWithDataItem:(id)arg1 viewController:(id)arg2;
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

