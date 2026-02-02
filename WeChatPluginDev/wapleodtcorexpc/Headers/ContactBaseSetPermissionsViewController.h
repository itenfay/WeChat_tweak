//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString;
@protocol SetPermissionsViewControllerDelegate;

@interface ContactBaseSetPermissionsViewController
{
    _Bool _m_bIsDisableAllPermissionContact;
    CContact *_m_contact;
    NSString *_m_moreLimitFootTitle;
    id <SetPermissionsViewControllerDelegate> _viewDelegate;
}

+ (_Bool)shouldShowSetPermissionsWithUserName:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SetPermissionsViewControllerDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(nonatomic) _Bool m_bIsDisableAllPermissionContact; // @synthesize m_bIsDisableAllPermissionContact=_m_bIsDisableAllPermissionContact;
@property(retain, nonatomic) NSString *m_moreLimitFootTitle; // @synthesize m_moreLimitFootTitle=_m_moreLimitFootTitle;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact=_m_contact;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)realDoSocialBlackWithModType:(long long)arg1;
- (void)doOpAddOrRemoveSocialBlackPermission:(_Bool)arg1;
- (void)opAllPermission;
- (void)opSocialBlackPermission;
- (void)reloadTableView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

