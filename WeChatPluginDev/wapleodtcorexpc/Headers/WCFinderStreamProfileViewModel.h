//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ForwardMessageLogicController, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, WCFinderContact, WCFinderProfileOverviewPageModel, WCFinderProfilePrivateViewModel, WCFinderPushProfileParams, WCFinderStreamProfileHeadData, WCFinderStreamProfilePageItem;
@protocol WCFinderStreamProfileViewModelDelegate;

@interface WCFinderStreamProfileViewModel : NSObject
{
    _Bool _loadingContact;
    _Bool _loadContactFailed;
    _Bool _isOwneProfile;
    _Bool _enablePrivateLock;
    _Bool _showHalfScreenShowInWXProfileView;
    _Bool _alreadyFetchPageData;
    _Bool _needRefreshBlankState;
    int _selectedPageIdWhenDataLoaded;
    WCFinderStreamProfileHeadData *_headerViewModel;
    NSString *_username;
    NSString *_viewername;
    id <WCFinderStreamProfileViewModelDelegate> _delegate;
    NSString *_accountInfoUrl;
    NSArray *_displayPageModels;
    WCFinderProfilePrivateViewModel *_privateAccountModel;
    ForwardMessageLogicController *_forwardLogic;
    NSNumber *_pendingFollowState;
    NSMutableSet *_alreadyFetchDataPlugins;
    long long _headerCGIState;
    NSMutableSet *_pendingFetchingDatas;
    NSMutableArray *_waitContactBlock;
    NSMutableArray *_waitFirstPageModels;
    NSMutableArray *_waitOtherPageBlocks;
    NSArray *_privateDisplayPageModels;
    NSMutableArray *_installPlugins;
    NSMutableArray *_supportPageTypes;
    NSMutableSet *_displayClasses;
    NSMutableDictionary *_tabIdPageClassMap;
    WCFinderStreamProfilePageItem *_loadingItem;
    unsigned long long _displayTabModelUpdateHash;
    NSString *_selectedPageWhenDataLoaded;
    WCFinderProfileOverviewPageModel *_overviewModel;
}

+ (id)supportPluginClasses;
+ (id)localPageClasses;
+ (id)supportPageClasses;
- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderProfileOverviewPageModel *overviewModel; // @synthesize overviewModel=_overviewModel;
@property(nonatomic) int selectedPageIdWhenDataLoaded; // @synthesize selectedPageIdWhenDataLoaded=_selectedPageIdWhenDataLoaded;
@property(retain, nonatomic) NSString *selectedPageWhenDataLoaded; // @synthesize selectedPageWhenDataLoaded=_selectedPageWhenDataLoaded;
@property(nonatomic) unsigned long long displayTabModelUpdateHash; // @synthesize displayTabModelUpdateHash=_displayTabModelUpdateHash;
@property(retain, nonatomic) WCFinderStreamProfilePageItem *loadingItem; // @synthesize loadingItem=_loadingItem;
@property(retain, nonatomic) NSMutableDictionary *tabIdPageClassMap; // @synthesize tabIdPageClassMap=_tabIdPageClassMap;
@property(retain, nonatomic) NSMutableSet *displayClasses; // @synthesize displayClasses=_displayClasses;
@property(retain, nonatomic) NSMutableArray *supportPageTypes; // @synthesize supportPageTypes=_supportPageTypes;
@property(retain, nonatomic) NSMutableArray *installPlugins; // @synthesize installPlugins=_installPlugins;
@property(retain, nonatomic) NSArray *privateDisplayPageModels; // @synthesize privateDisplayPageModels=_privateDisplayPageModels;
@property(retain, nonatomic) NSMutableArray *waitOtherPageBlocks; // @synthesize waitOtherPageBlocks=_waitOtherPageBlocks;
@property(retain, nonatomic) NSMutableArray *waitFirstPageModels; // @synthesize waitFirstPageModels=_waitFirstPageModels;
@property(retain, nonatomic) NSMutableArray *waitContactBlock; // @synthesize waitContactBlock=_waitContactBlock;
@property(retain, nonatomic) NSMutableSet *pendingFetchingDatas; // @synthesize pendingFetchingDatas=_pendingFetchingDatas;
@property(nonatomic) _Bool needRefreshBlankState; // @synthesize needRefreshBlankState=_needRefreshBlankState;
@property(nonatomic) long long headerCGIState; // @synthesize headerCGIState=_headerCGIState;
@property(retain, nonatomic) NSMutableSet *alreadyFetchDataPlugins; // @synthesize alreadyFetchDataPlugins=_alreadyFetchDataPlugins;
@property(nonatomic) _Bool alreadyFetchPageData; // @synthesize alreadyFetchPageData=_alreadyFetchPageData;
@property(retain, nonatomic) NSNumber *pendingFollowState; // @synthesize pendingFollowState=_pendingFollowState;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) WCFinderProfilePrivateViewModel *privateAccountModel; // @synthesize privateAccountModel=_privateAccountModel;
@property(retain, nonatomic) NSArray *displayPageModels; // @synthesize displayPageModels=_displayPageModels;
@property(nonatomic) _Bool showHalfScreenShowInWXProfileView; // @synthesize showHalfScreenShowInWXProfileView=_showHalfScreenShowInWXProfileView;
@property(retain, nonatomic) NSString *accountInfoUrl; // @synthesize accountInfoUrl=_accountInfoUrl;
@property(nonatomic) __weak id <WCFinderStreamProfileViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool enablePrivateLock; // @synthesize enablePrivateLock=_enablePrivateLock;
@property(readonly, nonatomic) _Bool isOwneProfile; // @synthesize isOwneProfile=_isOwneProfile;
@property(retain, nonatomic) NSString *viewername; // @synthesize viewername=_viewername;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) _Bool loadContactFailed; // @synthesize loadContactFailed=_loadContactFailed;
@property(nonatomic) _Bool loadingContact; // @synthesize loadingContact=_loadingContact;
@property(retain, nonatomic) WCFinderStreamProfileHeadData *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
- (id)fetchMoreInfo:(int)arg1;
- (void)fetchIdentifyInfo;
- (void)fetchContactInfo;
- (_Bool)isFromNewLife;
- (id)pageReportInfoForLog25496:(id)arg1;
- (id)dataScene;
- (void)onStreamProfilePage:(id)arg1 turnDisplay:(_Bool)arg2;
- (id)createItemForUserInfo:(id)arg1;
- (unsigned long long)calculateDisplayPageModelHash;
- (void)updateDisplayPageModelCtx:(CDUnknownBlockType)arg1;
- (id)_createDisplayPageModels;
- (void)doRebuildDisplayPageModels;
- (void)rebuildDisplayPageModels;
- (void)removeDisplayPageModelObserve;
- (void)updatePageDisplayFlag:(Class)arg1 display:(_Bool)arg2;
- (void)updateDisplayTabFromHeaderTabList;
- (id)queryOverviewSectionWithType:(long long)arg1;
- (void)onPageModel:(id)arg1 waitOtherPage:(Class)arg2 complete:(CDUnknownBlockType)arg3;
- (void)onPageModel:(id)arg1 waitContactLoad:(CDUnknownBlockType)arg2;
- (void)onPageModel:(id)arg1 updateOverview:(long long)arg2 necessary:(_Bool)arg3 update:(CDUnknownBlockType)arg4;
- (void)onPageModelDisplayTabChanged:(id)arg1;
- (void)checkAllCGIFinish;
- (void)onPageModel:(id)arg1 firstCGIFinish:(_Bool)arg2 cgiProfile:(id)arg3;
- (void)onPlugin:(id)arg1 cgiLoadFinish:(_Bool)arg2 cgiProfile:(id)arg3;
- (void)onPlugin:(id)arg1 updateOverview:(long long)arg2 necessary:(_Bool)arg3 update:(CDUnknownBlockType)arg4;
- (void)fetchPageData;
- (id)createLocalTabs;
- (void)onFetchPageDataTimeout;
- (_Bool)_isPageModelNeedWaitLoad:(Class)arg1;
- (id)_findWaitFirstPageModels:(Class)arg1;
- (id)loadingItemModel;
- (void)makePendingPage;
- (void)createPageModelFromOldModelsTabList:(id)arg1 headerCGIControlTabDisplay:(_Bool)arg2;
- (void)forceMakeStickerTabPrefetch;
- (id)ensureDraftTabDef:(id)arg1;
- (id)insertEmotionTabDef:(id)arg1;
- (void)createPageModelsWithTabList:(id)arg1 headerCGIControlTabDisplay:(_Bool)arg2;
- (void)_onRequstHeaderFailed;
- (void)afterFetchHaderData;
- (void)_setupRetryBlankPage;
- (void)updateLoadingState;
- (id)_ensurePageModel:(int)arg1;
- (void)requestHeaderData;
- (long long)tabDisplayIdxForTabId:(int)arg1;
- (void)ensurePageModelData:(id)arg1;
- (void)fetchServerData;
- (void)createDisplayPageFromCache;
- (void)prepareLoadingItem;
- (void)preparePages;
- (void)onUserInfoChange;
- (void)notifySubModelDataChanged:(CDUnknownBlockType)arg1;
- (void)onFinderUserPageLogouted;
- (_Bool)showAuthorPerspectiveLogoutPage;
- (void)onFinderUserPageContactInfoUpdate:(id)arg1;
- (void)onFinderContactFollowStatusUpdateFailure:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onFinderUserPageFetchFail:(int)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)retryWhenUserpageFailed;
- (void)modUserShowFinderInWXProfile:(_Bool)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)checkShouldShowConcertTicketAfterFirstReservation;
- (void)handleLiveNoticeForUser;
- (void)handleLiveNoticeForAuthor;
- (id)liveNoticeInfo;
- (void)coverUploadFailure;
- (void)coverUploadSucess:(id)arg1;
- (_Bool)shouldShowWasBlockedTips;
- (_Bool)shouldHiddenContentForPrivateAccount;
- (void)setProfileHeaderExtInfo:(id)arg1;
- (void)updateProfileHeaderExtInfo;
- (id)profileHeaderExtInfo;
- (void)shareNameCardToFriend;
- (void)modifyBlockPoster:(_Bool)arg1;
- (void)getContactWithNickname:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)onFeedFollowStatusChanged:(unsigned long long)arg1 optype:(unsigned long long)arg2;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 isTop:(_Bool)arg2 noticeId:(id)arg3;
- (void)fetchProfileExtInfo;
@property(readonly, nonatomic) _Bool shouldHiddenTab;
@property(readonly, nonatomic) NSString *redirectNonceID;
@property(readonly, nonatomic) NSString *redirectFeedID;
- (_Bool)isDisplayPrivatePage;
- (_Bool)hasGuatantor;
- (_Bool)shouldHiddenRightMenu;
@property(readonly, nonatomic) WCFinderPushProfileParams *params;
- (void)setupHasShowHalfScreenShowInProfileView;
- (int)currentCommentScene;
@property(readonly, nonatomic) NSString *logoutPageUrl;
@property(readonly, nonatomic) _Bool isAccountLogoutDone;
@property(readonly, nonatomic) _Bool isAccountLogout;
@property(readonly, nonatomic) WCFinderContact *contact;
- (_Bool)isFinderIdentity;
@property(readonly, nonatomic) _Bool isAuthorPerspective;
- (void)ensureDisplayPages;
- (void)prepareWithViewer:(id)arg1 contact:(id)arg2 params:(id)arg3;
- (id)initWithContact:(id)arg1 viewer:(id)arg2 params:(id)arg3;
- (id)initWithUsername:(id)arg1 viewer:(id)arg2 params:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

