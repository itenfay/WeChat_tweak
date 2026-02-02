//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderNewUserPrepareResponse, NSString, UIViewController, WCFinderContact;
@protocol WCFinderPrivacySettingHelperDelegate;

@interface WCFinderPrivacySettingHelper : NSObject
{
    int _commentScene;
    WCFinderContact *_contact;
    FinderNewUserPrepareResponse *_userPrepare;
    UIViewController *_ownerVC;
    id <WCFinderPrivacySettingHelperDelegate> _delegate;
    long long _flag;
}

+ (unsigned long long)getCurrentPrivacyWithContact:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long flag; // @synthesize flag=_flag;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) __weak id <WCFinderPrivacySettingHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *ownerVC; // @synthesize ownerVC=_ownerVC;
@property(retain, nonatomic) FinderNewUserPrepareResponse *userPrepare; // @synthesize userPrepare=_userPrepare;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (void)openAccountSettingVC;
- (id)addAccountManagerSection;
- (void)clickPrivacyExportAction;
- (id)addExportInfoSection;
- (void)reportSwitchChangedWithEid:(id)arg1 reportType:(long long)arg2 open:(_Bool)arg3;
- (void)clickUnDisplayMentioned:(id)arg1;
- (void)addMemtionFilterCell:(id)arg1;
- (void)postAssistForNewLifeSwitchDidChange:(id)arg1;
- (void)addNewLifeRefCell:(id)arg1;
- (void)mjRefSwitchDidChange:(id)arg1;
- (void)addMJRefCell:(id)arg1;
- (void)miniappReferenceSectionSwitchChanged:(id)arg1;
- (void)addMiniappReferenceCell:(id)arg1;
- (void)mpRefSwitchDidChange:(id)arg1;
- (void)extractPOIFromAssetPermissionChange:(id)arg1;
- (void)extractPOIInfoPermissionFromAssetCell:(id)arg1;
- (void)addMpRefCell:(id)arg1;
- (void)addReferenceSection:(id)arg1;
- (void)clickFollowSendMsgCell:(id)arg1;
- (void)addRefusePrimaryMsgCell:(id)arg1;
- (void)clickBlackListCell;
- (void)addBlockListCell:(id)arg1;
- (void)audienceMuteSwitchChanged:(id)arg1;
- (void)addAudienceMuteCell:(id)arg1;
- (id)interactionLimitDesc:(unsigned int)arg1;
- (void)interationMsgLimitAction;
- (void)interationCommentBulletLimitAction;
- (void)addInterationMsgLimitCell:(id)arg1;
- (void)addInterationCommentBulletLimitCell:(id)arg1;
- (void)configRefCell:(id)arg1;
- (void)privateAcountSwitchChanged:(id)arg1;
- (void)addPrimarySwitch:(id)arg1;
- (unsigned long long)currentPrivacy;
- (_Bool)privacyViewController:(id)arg1 multiSelectContactReturn:(id)arg2 finished:(_Bool)arg3;
- (void)privacyViewControllerDidClickCancel:(id)arg1;
- (void)privacyViewController:(id)arg1 didSelectPrivacy:(long long)arg2 Contacts:(id)arg3 contactTags:(id)arg4 isAllContactsSelected:(_Bool)arg5;
- (void)privacyViewControllerDidSelectExpandableCell:(id)arg1;
- (_Bool)privacyViewController:(id)arg1 canSelectPrivacySetting:(long long)arg2;
- (void)clickVisiblePermissionCell;
- (void)addNotRecommendCell:(id)arg1;
- (id)makeSectionSeparator;
- (void)_addShowInWXProflie:(id)arg1;
- (id)addRecomendSection;
- (id)getPrivacySettingWithSection;
- (_Bool)canShowPrivate;
- (void)addItemsToManager:(id)arg1;
- (_Bool)couldDisplay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

