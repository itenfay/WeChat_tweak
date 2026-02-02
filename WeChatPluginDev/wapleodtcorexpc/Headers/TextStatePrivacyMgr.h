//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSString, TextStateBaseCardContentView, TextStateModel, WCMomentsPrivacyViewController, WCMomentsShareScopeViewController;

@interface TextStatePrivacyMgr : NSObject
{
    _Bool _isRequestContactDataForOpening;
    _Bool _isRequestContactDataForModifying;
    _Bool _isModifyFromShareScopeVC;
    WCMomentsShareScopeViewController *_shareScopeVC;
    MMUIViewController *_shareScopeParentVC;
    TextStateBaseCardContentView *_contentView;
    TextStateModel *_openDataItem;
    WCMomentsPrivacyViewController *_privacyVC;
}

+ (long long)wcPostPrivacy2StatusPrivacy:(long long)arg1;
+ (long long)statusPrivacy2WCPostPrivacy:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isModifyFromShareScopeVC; // @synthesize isModifyFromShareScopeVC=_isModifyFromShareScopeVC;
@property(nonatomic) _Bool isRequestContactDataForModifying; // @synthesize isRequestContactDataForModifying=_isRequestContactDataForModifying;
@property(retain, nonatomic) WCMomentsPrivacyViewController *privacyVC; // @synthesize privacyVC=_privacyVC;
@property(nonatomic) _Bool isRequestContactDataForOpening; // @synthesize isRequestContactDataForOpening=_isRequestContactDataForOpening;
@property(retain, nonatomic) TextStateModel *openDataItem; // @synthesize openDataItem=_openDataItem;
@property(nonatomic) __weak TextStateBaseCardContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak MMUIViewController *shareScopeParentVC; // @synthesize shareScopeParentVC=_shareScopeParentVC;
@property(retain, nonatomic) WCMomentsShareScopeViewController *shareScopeVC; // @synthesize shareScopeVC=_shareScopeVC;
- (void)onClickUserName:(id)arg1;
- (void)onClickTagGroup:(unsigned int)arg1;
- (id)shareScopeViewControllerGetPresentingVC:(id)arg1;
- (void)shareScopeViewController:(id)arg1 didClickModifyScopeButton:(id)arg2;
- (void)onClickCell:(unsigned long long)arg1;
- (_Bool)privacyViewController:(id)arg1 canSelectPrivacySetting:(long long)arg2;
- (void)privacyViewControllerDidClickCancel:(id)arg1;
- (void)privacyViewController:(id)arg1 didSelectPrivacy:(long long)arg2 Contacts:(id)arg3 contactTags:(id)arg4 isAllContactsSelected:(_Bool)arg5;
- (void)_clearModifyShareScopeData;
- (void)_clearOpenShareScopeData;
- (void)_clearData;
- (_Bool)_isPrivacyChangedWithPrivacy:(long long)arg1 newTags:(id)arg2 newContacts:(id)arg3;
- (void)_handleModifyDataItemFinishedWithResult:(_Bool)arg1;
- (id)_createPrivacyParamsWithDataItem:(id)arg1;
- (void)_updatePrivacyVCWithDataItem:(id)arg1;
- (void)_openShareScopeWithDataItem:(id)arg1 isNeedForceUpdate:(_Bool)arg2;
- (void)modifyShareScopeWithDataItem:(id)arg1 viewController:(id)arg2;
- (void)openShareScopeWithDataItem:(id)arg1 viewController:(id)arg2 contentView:(id)arg3;
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

