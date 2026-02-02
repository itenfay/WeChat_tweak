//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveBadgeInfo, FinderLiveContact, MMFinderLiveConnectMicUser, MMFinderLiveTask, MMFinderLiveTaskId, NSData, NSString, UIColor, UIView, WCFinderContact;

@interface MMFinderLiveOnlineUserProfileOpenParameter
{
    _Bool _isOfflineOperation;
    _Bool _isSendPrivateMsgEnable;
    _Bool _isRewardEnable;
    _Bool _isFinderLiveAliasRole;
    _Bool _isSwitchLiveEnabled;
    _Bool _isFromOnlineStateView;
    _Bool _isCommentAssistant;
    _Bool _isDarkMode;
    _Bool _isNeedObserveDarkModeChange;
    _Bool _userIsAnchor;
    _Bool _isSelfConnectMicUser;
    _Bool _showMicSeatSettingButton;
    _Bool _showStopConnectMicButton;
    _Bool _isOtherAnonymousUser;
    MMFinderLiveTaskId *_liveTaskId;
    MMFinderLiveTask *_finderLiveTask;
    FinderLiveContact *_liveContact;
    WCFinderContact *_finderContact;
    MMFinderLiveConnectMicUser *_micUserInfo;
    FinderLiveBadgeInfo *_liveBadgeInfo;
    unsigned long long _disableCommentDef;
    double _highlightRectCornerRadius;
    NSData *_liveContactExtInfo;
    UIColor *_maskViewColor;
    UIView *_parentView;
    unsigned long long _openProfileScene;
    unsigned long long _userLiveIdentity;
    NSString *_finderUserName;
    NSString *_locationText;
    NSString *_genderText;
    NSString *_liveMicId;
    NSString *_commentMsgId;
    unsigned long long _commentMsgSeq;
    CDUnknownBlockType _complaintActionCallback;
    CDUnknownBlockType _kickoutActionCallback;
    CDUnknownBlockType _banCommentActionCallback;
    CDUnknownBlockType _noSenseBanCommentActionCallback;
    CDUnknownBlockType _sendPrivateMsgActionCallback;
    CDUnknownBlockType _followActionCallback;
    CDUnknownBlockType _openStreamProfileActionCallback;
    CDUnknownBlockType _openRewardGiftViewActionCallback;
    CDUnknownBlockType _modifyCommentAssistantRoleCallback;
    CDUnknownBlockType _viewDidOpenCallback;
    CDUnknownBlockType _viewDidDismissCallback;
    CDUnknownBlockType _actionSheetCancelCallback;
    CDUnknownBlockType _actionSheetWillDismissCallback;
    CDUnknownBlockType _switchLiveRoomActionCallback;
    CDUnknownBlockType _muteMicUserActionCallback;
    CDUnknownBlockType _micSeatSettingActionCallback;
    CDUnknownBlockType _maximizeOrMinimizeMicAudienceActionCallback;
    CDUnknownBlockType _stopAudienceConnectMicActionCallback;
    CDUnknownBlockType _viewWillDismissCallback;
    unsigned long long _fallbackLiveID;
    unsigned long long _fallbackObjectID;
    struct CGRect _highlightRect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isOtherAnonymousUser; // @synthesize isOtherAnonymousUser=_isOtherAnonymousUser;
@property(nonatomic) unsigned long long fallbackObjectID; // @synthesize fallbackObjectID=_fallbackObjectID;
@property(nonatomic) unsigned long long fallbackLiveID; // @synthesize fallbackLiveID=_fallbackLiveID;
@property(copy, nonatomic) CDUnknownBlockType viewWillDismissCallback; // @synthesize viewWillDismissCallback=_viewWillDismissCallback;
@property(copy, nonatomic) CDUnknownBlockType stopAudienceConnectMicActionCallback; // @synthesize stopAudienceConnectMicActionCallback=_stopAudienceConnectMicActionCallback;
@property(copy, nonatomic) CDUnknownBlockType maximizeOrMinimizeMicAudienceActionCallback; // @synthesize maximizeOrMinimizeMicAudienceActionCallback=_maximizeOrMinimizeMicAudienceActionCallback;
@property(copy, nonatomic) CDUnknownBlockType micSeatSettingActionCallback; // @synthesize micSeatSettingActionCallback=_micSeatSettingActionCallback;
@property(copy, nonatomic) CDUnknownBlockType muteMicUserActionCallback; // @synthesize muteMicUserActionCallback=_muteMicUserActionCallback;
@property(copy, nonatomic) CDUnknownBlockType switchLiveRoomActionCallback; // @synthesize switchLiveRoomActionCallback=_switchLiveRoomActionCallback;
@property(copy, nonatomic) CDUnknownBlockType actionSheetWillDismissCallback; // @synthesize actionSheetWillDismissCallback=_actionSheetWillDismissCallback;
@property(copy, nonatomic) CDUnknownBlockType actionSheetCancelCallback; // @synthesize actionSheetCancelCallback=_actionSheetCancelCallback;
@property(copy, nonatomic) CDUnknownBlockType viewDidDismissCallback; // @synthesize viewDidDismissCallback=_viewDidDismissCallback;
@property(copy, nonatomic) CDUnknownBlockType viewDidOpenCallback; // @synthesize viewDidOpenCallback=_viewDidOpenCallback;
@property(copy, nonatomic) CDUnknownBlockType modifyCommentAssistantRoleCallback; // @synthesize modifyCommentAssistantRoleCallback=_modifyCommentAssistantRoleCallback;
@property(copy, nonatomic) CDUnknownBlockType openRewardGiftViewActionCallback; // @synthesize openRewardGiftViewActionCallback=_openRewardGiftViewActionCallback;
@property(copy, nonatomic) CDUnknownBlockType openStreamProfileActionCallback; // @synthesize openStreamProfileActionCallback=_openStreamProfileActionCallback;
@property(copy, nonatomic) CDUnknownBlockType followActionCallback; // @synthesize followActionCallback=_followActionCallback;
@property(copy, nonatomic) CDUnknownBlockType sendPrivateMsgActionCallback; // @synthesize sendPrivateMsgActionCallback=_sendPrivateMsgActionCallback;
@property(copy, nonatomic) CDUnknownBlockType noSenseBanCommentActionCallback; // @synthesize noSenseBanCommentActionCallback=_noSenseBanCommentActionCallback;
@property(copy, nonatomic) CDUnknownBlockType banCommentActionCallback; // @synthesize banCommentActionCallback=_banCommentActionCallback;
@property(copy, nonatomic) CDUnknownBlockType kickoutActionCallback; // @synthesize kickoutActionCallback=_kickoutActionCallback;
@property(copy, nonatomic) CDUnknownBlockType complaintActionCallback; // @synthesize complaintActionCallback=_complaintActionCallback;
@property(nonatomic) unsigned long long commentMsgSeq; // @synthesize commentMsgSeq=_commentMsgSeq;
@property(copy, nonatomic) NSString *commentMsgId; // @synthesize commentMsgId=_commentMsgId;
@property(copy, nonatomic) NSString *liveMicId; // @synthesize liveMicId=_liveMicId;
@property(copy, nonatomic) NSString *genderText; // @synthesize genderText=_genderText;
@property(copy, nonatomic) NSString *locationText; // @synthesize locationText=_locationText;
@property(nonatomic) _Bool showStopConnectMicButton; // @synthesize showStopConnectMicButton=_showStopConnectMicButton;
@property(nonatomic) _Bool showMicSeatSettingButton; // @synthesize showMicSeatSettingButton=_showMicSeatSettingButton;
@property(retain, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(nonatomic) _Bool isSelfConnectMicUser; // @synthesize isSelfConnectMicUser=_isSelfConnectMicUser;
@property(nonatomic) _Bool userIsAnchor; // @synthesize userIsAnchor=_userIsAnchor;
@property(nonatomic) unsigned long long userLiveIdentity; // @synthesize userLiveIdentity=_userLiveIdentity;
@property(nonatomic) unsigned long long openProfileScene; // @synthesize openProfileScene=_openProfileScene;
@property(nonatomic) _Bool isNeedObserveDarkModeChange; // @synthesize isNeedObserveDarkModeChange=_isNeedObserveDarkModeChange;
@property(nonatomic) _Bool isDarkMode; // @synthesize isDarkMode=_isDarkMode;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) _Bool isCommentAssistant; // @synthesize isCommentAssistant=_isCommentAssistant;
@property(nonatomic) _Bool isFromOnlineStateView; // @synthesize isFromOnlineStateView=_isFromOnlineStateView;
@property(nonatomic) _Bool isSwitchLiveEnabled; // @synthesize isSwitchLiveEnabled=_isSwitchLiveEnabled;
@property(retain, nonatomic) UIColor *maskViewColor; // @synthesize maskViewColor=_maskViewColor;
@property(retain, nonatomic) NSData *liveContactExtInfo; // @synthesize liveContactExtInfo=_liveContactExtInfo;
@property(nonatomic) double highlightRectCornerRadius; // @synthesize highlightRectCornerRadius=_highlightRectCornerRadius;
@property(nonatomic) struct CGRect highlightRect; // @synthesize highlightRect=_highlightRect;
@property(nonatomic) _Bool isFinderLiveAliasRole; // @synthesize isFinderLiveAliasRole=_isFinderLiveAliasRole;
@property(nonatomic) _Bool isRewardEnable; // @synthesize isRewardEnable=_isRewardEnable;
@property(nonatomic) _Bool isSendPrivateMsgEnable; // @synthesize isSendPrivateMsgEnable=_isSendPrivateMsgEnable;
@property(nonatomic) unsigned long long disableCommentDef; // @synthesize disableCommentDef=_disableCommentDef;
@property(nonatomic) _Bool isOfflineOperation; // @synthesize isOfflineOperation=_isOfflineOperation;
@property(retain, nonatomic) FinderLiveBadgeInfo *liveBadgeInfo; // @synthesize liveBadgeInfo=_liveBadgeInfo;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *micUserInfo; // @synthesize micUserInfo=_micUserInfo;
@property(retain, nonatomic) WCFinderContact *finderContact; // @synthesize finderContact=_finderContact;
@property(retain, nonatomic) FinderLiveContact *liveContact; // @synthesize liveContact=_liveContact;
@property(retain, nonatomic) MMFinderLiveTask *finderLiveTask; // @synthesize finderLiveTask=_finderLiveTask;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (void)clearCallBacks;
- (_Bool)isFinderUser;
- (id)init;

@end

