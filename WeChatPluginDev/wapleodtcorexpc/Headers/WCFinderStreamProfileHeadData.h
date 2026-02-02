//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AnyPromise, FinderClubInfo, FinderJumpInfo, MMFinderProfileLiveNoticeContext, NSNumber, NSString, UIColor, WCFinderBGCover, WCFinderContact, WCFinderDataItem, WCFinderFriendsAlsoFollowViewModel, WCFinderJustWatchContoller, WCFinderProfileADPlugin, WCFinderProfileRenderProfile, WCFinderPushProfileParams, WCFinderSteamProfileHeaderTheme, WCFinderStreamProfileExtInfo, WCFinderUserMessage;
@protocol WCFinderProfilePullableFeedViewModel, WCFinderStreamProfileHeadDataDelegate, WCFinderStreamProfileHeadDataVCDelegate;

@interface WCFinderStreamProfileHeadData : NSObject
{
    WCFinderStreamProfileExtInfo *_extInfo;
    MMFinderProfileLiveNoticeContext *_liveNoticeContext;
    _Bool _isAuthor;
    _Bool _displayLimitModeContent;
    _Bool _isSignatureExpanded;
    _Bool _postEntryOnHeader;
    _Bool _displayNewLife;
    _Bool _useHeaderCGI;
    _Bool _useHomeCGI;
    _Bool _useLightData;
    _Bool _useServerShowAllBtnFlag;
    _Bool _supportPullingPage;
    _Bool _showWXProfileChecker;
    _Bool _hasRedPacketEventEntrance;
    int _currentCommentScene;
    int _reportScene;
    id <WCFinderStreamProfileHeadDataDelegate> _delegate;
    id <WCFinderStreamProfileHeadDataVCDelegate> _coverDelegate;
    NSString *_username;
    WCFinderContact *_contact;
    NSString *_dataScene;
    WCFinderPushProfileParams *_params;
    UIColor *_coverThemeColor;
    UIColor *_coverAndMaskColor;
    UIColor *_displayThemeBGColor;
    WCFinderSteamProfileHeaderTheme *_theme;
    WCFinderFriendsAlsoFollowViewModel *_followRecommend;
    AnyPromise *_identityInfoPromise;
    AnyPromise *_publicInfoPromise;
    WCFinderDataItem *_liveDataItem;
    long long _tabPreloadFlag;
    WCFinderProfileADPlugin *_adplugin;
    id <WCFinderProfilePullableFeedViewModel> _sharedFeedModel;
    id <WCFinderProfilePullableFeedViewModel> _pullableFeedModel;
    CDUnknownBlockType _feedMapper;
    long long _showInWXProfileCheckBoxState;
    WCFinderJustWatchContoller *_justWatchCtrl;
    NSNumber *_hasExposeJustWatchWhenEnter;
    WCFinderProfileRenderProfile *_renderProfile;
    NSString *_cacheSourceFeedSessionBuffer;
}

+ (id)coverMaskColor;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cacheSourceFeedSessionBuffer; // @synthesize cacheSourceFeedSessionBuffer=_cacheSourceFeedSessionBuffer;
@property(nonatomic) _Bool hasRedPacketEventEntrance; // @synthesize hasRedPacketEventEntrance=_hasRedPacketEventEntrance;
@property(nonatomic) _Bool showWXProfileChecker; // @synthesize showWXProfileChecker=_showWXProfileChecker;
@property(retain, nonatomic) WCFinderProfileRenderProfile *renderProfile; // @synthesize renderProfile=_renderProfile;
@property(nonatomic) _Bool supportPullingPage; // @synthesize supportPullingPage=_supportPullingPage;
@property(retain, nonatomic) NSNumber *hasExposeJustWatchWhenEnter; // @synthesize hasExposeJustWatchWhenEnter=_hasExposeJustWatchWhenEnter;
@property(retain, nonatomic) WCFinderJustWatchContoller *justWatchCtrl; // @synthesize justWatchCtrl=_justWatchCtrl;
@property(nonatomic) long long showInWXProfileCheckBoxState; // @synthesize showInWXProfileCheckBoxState=_showInWXProfileCheckBoxState;
@property(copy, nonatomic) CDUnknownBlockType feedMapper; // @synthesize feedMapper=_feedMapper;
@property(retain, nonatomic) id <WCFinderProfilePullableFeedViewModel> pullableFeedModel; // @synthesize pullableFeedModel=_pullableFeedModel;
@property(retain, nonatomic) id <WCFinderProfilePullableFeedViewModel> sharedFeedModel; // @synthesize sharedFeedModel=_sharedFeedModel;
@property(retain, nonatomic) WCFinderProfileADPlugin *adplugin; // @synthesize adplugin=_adplugin;
@property(nonatomic) _Bool useServerShowAllBtnFlag; // @synthesize useServerShowAllBtnFlag=_useServerShowAllBtnFlag;
@property(nonatomic) long long tabPreloadFlag; // @synthesize tabPreloadFlag=_tabPreloadFlag;
@property(nonatomic) _Bool useLightData; // @synthesize useLightData=_useLightData;
@property(nonatomic) _Bool useHomeCGI; // @synthesize useHomeCGI=_useHomeCGI;
@property(nonatomic) _Bool useHeaderCGI; // @synthesize useHeaderCGI=_useHeaderCGI;
@property(nonatomic) _Bool displayNewLife; // @synthesize displayNewLife=_displayNewLife;
@property(retain, nonatomic) WCFinderDataItem *liveDataItem; // @synthesize liveDataItem=_liveDataItem;
@property(retain, nonatomic) AnyPromise *publicInfoPromise; // @synthesize publicInfoPromise=_publicInfoPromise;
@property(retain, nonatomic) AnyPromise *identityInfoPromise; // @synthesize identityInfoPromise=_identityInfoPromise;
@property(nonatomic) _Bool postEntryOnHeader; // @synthesize postEntryOnHeader=_postEntryOnHeader;
@property(retain, nonatomic) WCFinderFriendsAlsoFollowViewModel *followRecommend; // @synthesize followRecommend=_followRecommend;
@property(retain, nonatomic) WCFinderSteamProfileHeaderTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) _Bool isSignatureExpanded; // @synthesize isSignatureExpanded=_isSignatureExpanded;
@property(retain, nonatomic) UIColor *displayThemeBGColor; // @synthesize displayThemeBGColor=_displayThemeBGColor;
@property(retain, nonatomic) UIColor *coverAndMaskColor; // @synthesize coverAndMaskColor=_coverAndMaskColor;
@property(retain, nonatomic) UIColor *coverThemeColor; // @synthesize coverThemeColor=_coverThemeColor;
@property(nonatomic) int reportScene; // @synthesize reportScene=_reportScene;
@property(retain, nonatomic) WCFinderPushProfileParams *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *dataScene; // @synthesize dataScene=_dataScene;
@property(nonatomic) int currentCommentScene; // @synthesize currentCommentScene=_currentCommentScene;
@property(retain, nonatomic) WCFinderStreamProfileExtInfo *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) _Bool displayLimitModeContent; // @synthesize displayLimitModeContent=_displayLimitModeContent;
@property(nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
@property(nonatomic) __weak id <WCFinderStreamProfileHeadDataVCDelegate> coverDelegate; // @synthesize coverDelegate=_coverDelegate;
@property(nonatomic) __weak id <WCFinderStreamProfileHeadDataDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onProfileExtInfoCoverChanged:(id)arg1;
- (void)modUserShowFinderInWXProfile:(_Bool)arg1 failure:(CDUnknownBlockType)arg2;
- (void)modUserShowFinderInWXProfile:(_Bool)arg1;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 isTop:(_Bool)arg2 noticeId:(id)arg3 aggregateType:(unsigned int)arg4;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 isTop:(_Bool)arg2 noticeId:(id)arg3;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 didChangeReservedState:(unsigned long long)arg2 withNoticeIds:(id)arg3 failureNoticeIds:(id)arg4 opType:(unsigned long long)arg5 aggregateType:(unsigned int)arg6;
- (void)onFinderLiveDidRevokeNoticeInfo:(id)arg1;
- (void)doNotifyChanged;
- (void)notifyChanged;
- (void)deletefinderEventWithEventId:(id)arg1;
- (id)sourceFeedSessionBuffer;
- (long long)feedCGIFlag;
- (void)requestFollowRecommend:(CDUnknownBlockType)arg1;
- (_Bool)filterRedDotPath:(id)arg1;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)onContactDidUpdate;
- (void)onProfileExtInfoChanged;
@property(readonly, nonatomic) FinderClubInfo *clubInfo;
- (_Bool)isGroupFinder;
@property(readonly, nonatomic) MMFinderProfileLiveNoticeContext *liveNoticeContext;
@property(readonly, nonatomic) FinderJumpInfo *olympicsJumpInfo;
- (void)safeCallDelegateNotifyCoverChanged:(long long)arg1;
- (void)notifyCoverChanged:(id)arg1;
- (void)setCover:(id)arg1;
- (_Bool)displayCover;
@property(readonly, nonatomic) WCFinderBGCover *cover;
- (void)onExtInfoChangeFromOld:(id)arg1 toExtInfo:(id)arg2;
@property(readonly, nonatomic) _Bool showThinkRedPacketEvent;
- (void)updateShowInWXProfileCheckBodxState;
- (void)updateShowInWXProfileCheckerFirstTime;
- (void)hideCoverMask;
- (_Bool)shouldShowMemberZone;
- (_Bool)showPostInHeader;
- (_Bool)enablePost;
- (_Bool)canFollow;
@property(readonly, nonatomic) WCFinderUserMessage *userMessage;
- (_Bool)isBelongMyFinderContact;
- (_Bool)isSelf;
- (_Bool)shouldShowBanner;
- (_Bool)shouldShowRedBadgeForMoreAction;
- (_Bool)moreActionJumpFinderSetting;
- (void)dealloc;
- (id)extKey;
- (id)initWithUsername:(id)arg1 params:(id)arg2 isAuthor:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

