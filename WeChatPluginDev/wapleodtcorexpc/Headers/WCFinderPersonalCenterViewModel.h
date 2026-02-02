//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderNewUserPrepareResponse, NSMutableArray, NSString, NSURL, WCFinderContact, WCFinderContactPreviewData, WCFinderDataItem;
@protocol WCFinderPersonalCenterViewModelDelegate;

@interface WCFinderPersonalCenterViewModel : NSObject
{
    _Bool _isCreateLivePrepareChecked;
    _Bool _logoutCacheFlag;
    int _refCommentScene;
    id <WCFinderPersonalCenterViewModelDelegate> _delegate;
    FinderNewUserPrepareResponse *_userPrepareResponse;
    WCFinderContact *_contact;
    NSMutableArray *_otherContacts;
    WCFinderContactPreviewData *_previewData;
    NSString *_refObjectid;
    WCFinderDataItem *_fromDataItem;
    NSString *_finderPrivateMsgTailText;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool logoutCacheFlag; // @synthesize logoutCacheFlag=_logoutCacheFlag;
@property(retain, nonatomic) NSString *finderPrivateMsgTailText; // @synthesize finderPrivateMsgTailText=_finderPrivateMsgTailText;
@property(retain, nonatomic) WCFinderDataItem *fromDataItem; // @synthesize fromDataItem=_fromDataItem;
@property(nonatomic) int refCommentScene; // @synthesize refCommentScene=_refCommentScene;
@property(copy, nonatomic) NSString *refObjectid; // @synthesize refObjectid=_refObjectid;
@property(retain, nonatomic) WCFinderContactPreviewData *previewData; // @synthesize previewData=_previewData;
@property(retain, nonatomic) NSMutableArray *otherContacts; // @synthesize otherContacts=_otherContacts;
@property(readonly, nonatomic) _Bool isCreateLivePrepareChecked; // @synthesize isCreateLivePrepareChecked=_isCreateLivePrepareChecked;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) FinderNewUserPrepareResponse *userPrepareResponse; // @synthesize userPrepareResponse=_userPrepareResponse;
@property(nonatomic) __weak id <WCFinderPersonalCenterViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onChangeSelectedFinderUsername:(id)arg1;
- (void)updateContactFromUserPrepare:(id)arg1 prepareFinders:(id)arg2;
- (void)reloadContact;
- (void)onFinderContactUpdate:(id)arg1;
- (void)cleanPrivateMsgText;
- (void)refreshPrivateMsgText;
- (void)_fetchPreviewData;
- (void)changeSelectedContact:(id)arg1;
@property(readonly, nonatomic) NSURL *accountLogoutUrl;
- (_Bool)isAccountFreezing;
@property(readonly, nonatomic) _Bool accountLogout;
- (void)clearCameraRedPoint;
- (unsigned long long)getMemberUnreadMentionCount;
- (unsigned long long)getFinderUnreadMentionCount;
- (unsigned long long)getWechatUnreadMentionCount;
- (id)takePhotoRealNameUrl;
- (_Bool)showTakePhotoForRealName;
- (_Bool)forbidenForeignerFinder;
- (_Bool)isForeignerContact;
- (_Bool)isContactSilent;
- (_Bool)isContactBlocked;
- (_Bool)haveFinderContact;
- (id)unAuthFinderInfo;
- (_Bool)canPost;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

