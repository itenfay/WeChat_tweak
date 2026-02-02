//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveContact, MMFinderLiveAudioModeBackgroundConfiguration, MMFinderLiveFreeMicLocalInfo, NSArray, NSData, NSString, WCFinderContact;

@interface MMFinderLiveConnectMicUser
{
    _Bool _useVideo;
    _Bool _initialUseVideo;
    _Bool _isConnecting;
    _Bool _isConnectWaiting;
    _Bool _isSelf;
    _Bool _isAnchor;
    _Bool _isCurrentAnchor;
    _Bool _hasConnectedOtherRoom;
    _Bool _isAudioMode;
    _Bool _isAppliedBySelf;
    _Bool _isTalking;
    _Bool _isRemoteClosed;
    _Bool _isMicTalking;
    _Bool _isMicMutedByAnchor;
    _Bool _isMicMutedBySelf;
    _Bool _isLiveRoomAnchorMicMutedByAnchor;
    _Bool _isCurrentKtvSinger;
    _Bool _isAnchorPkChangeLayoutEnabled;
    unsigned int _boardType;
    unsigned int _micUserAttrFlag;
    unsigned int _sdkRoomId;
    int _talkingCount;
    WCFinderContact *_connectMicFinderContact;
    unsigned long long _userState;
    unsigned long long _localCloseState;
    unsigned long long _tryCloseCount;
    NSString *_sdkUserId;
    NSString *_sessionId;
    NSString *_boardKey;
    unsigned long long _sequence;
    unsigned long long _expiredTime;
    NSString *_sdkPkSign;
    NSString *_sdkNewPkSign;
    NSString *_coverImageUrlString;
    MMFinderLiveAudioModeBackgroundConfiguration *_audioModeBackgroundConfiguration;
    NSString *_anchorApplyId;
    unsigned long long _randomMicState;
    NSData *_randomMicBuffer;
    unsigned long long _zOrder;
    unsigned long long _focusState;
    unsigned long long _uiType;
    NSString *_anchorSdkUserId;
    MMFinderLiveFreeMicLocalInfo *_freeMicLocalInfo;
    NSString *_selfDisplayName;
    NSArray *_badgeInfos;
    FinderLiveContact *_finderLiveContact;
    unsigned long long _liveHeatValue;
    unsigned long long _audienceApplySearId;
    unsigned long long _paidMicLastDurationInSeconds;
    unsigned long long _estimatedMicEndTimeOnAnchorSideInSeconds;
    struct CGRect _normalizedUserFrame;
}

+ (id)genMicUserWithSdkUserId:(id)arg1 andContact:(id)arg2;
+ (id)currentAnchorUserFromContact:(id)arg1;
+ (id)connectMicUserFromContact:(id)arg1 finderLiveContact:(id)arg2;
+ (id)connectMicUserFromContact:(id)arg1;
+ (id)connectMicUserFromAnchorContact:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long estimatedMicEndTimeOnAnchorSideInSeconds; // @synthesize estimatedMicEndTimeOnAnchorSideInSeconds=_estimatedMicEndTimeOnAnchorSideInSeconds;
@property(nonatomic) unsigned long long paidMicLastDurationInSeconds; // @synthesize paidMicLastDurationInSeconds=_paidMicLastDurationInSeconds;
@property(nonatomic) _Bool isAnchorPkChangeLayoutEnabled; // @synthesize isAnchorPkChangeLayoutEnabled=_isAnchorPkChangeLayoutEnabled;
@property(nonatomic) unsigned long long audienceApplySearId; // @synthesize audienceApplySearId=_audienceApplySearId;
@property(nonatomic) unsigned long long liveHeatValue; // @synthesize liveHeatValue=_liveHeatValue;
@property(retain, nonatomic) FinderLiveContact *finderLiveContact; // @synthesize finderLiveContact=_finderLiveContact;
@property(retain, nonatomic) NSArray *badgeInfos; // @synthesize badgeInfos=_badgeInfos;
@property(nonatomic) _Bool isCurrentKtvSinger; // @synthesize isCurrentKtvSinger=_isCurrentKtvSinger;
@property(nonatomic) _Bool isLiveRoomAnchorMicMutedByAnchor; // @synthesize isLiveRoomAnchorMicMutedByAnchor=_isLiveRoomAnchorMicMutedByAnchor;
@property(nonatomic) _Bool isMicMutedBySelf; // @synthesize isMicMutedBySelf=_isMicMutedBySelf;
@property(nonatomic) _Bool isMicMutedByAnchor; // @synthesize isMicMutedByAnchor=_isMicMutedByAnchor;
@property(copy, nonatomic) NSString *selfDisplayName; // @synthesize selfDisplayName=_selfDisplayName;
@property(retain, nonatomic) MMFinderLiveFreeMicLocalInfo *freeMicLocalInfo; // @synthesize freeMicLocalInfo=_freeMicLocalInfo;
@property(nonatomic) _Bool isMicTalking; // @synthesize isMicTalking=_isMicTalking;
@property(copy, nonatomic) NSString *anchorSdkUserId; // @synthesize anchorSdkUserId=_anchorSdkUserId;
@property(nonatomic) unsigned long long uiType; // @synthesize uiType=_uiType;
@property(nonatomic) unsigned long long focusState; // @synthesize focusState=_focusState;
@property(nonatomic) unsigned long long zOrder; // @synthesize zOrder=_zOrder;
@property(nonatomic) struct CGRect normalizedUserFrame; // @synthesize normalizedUserFrame=_normalizedUserFrame;
@property(retain, nonatomic) NSData *randomMicBuffer; // @synthesize randomMicBuffer=_randomMicBuffer;
@property(nonatomic) unsigned long long randomMicState; // @synthesize randomMicState=_randomMicState;
@property(nonatomic) _Bool isRemoteClosed; // @synthesize isRemoteClosed=_isRemoteClosed;
@property(nonatomic) int talkingCount; // @synthesize talkingCount=_talkingCount;
@property(nonatomic) _Bool isTalking; // @synthesize isTalking=_isTalking;
@property(copy, nonatomic) NSString *anchorApplyId; // @synthesize anchorApplyId=_anchorApplyId;
@property(nonatomic) _Bool isAppliedBySelf; // @synthesize isAppliedBySelf=_isAppliedBySelf;
@property(retain, nonatomic) MMFinderLiveAudioModeBackgroundConfiguration *audioModeBackgroundConfiguration; // @synthesize audioModeBackgroundConfiguration=_audioModeBackgroundConfiguration;
@property(nonatomic) _Bool isAudioMode; // @synthesize isAudioMode=_isAudioMode;
@property(copy, nonatomic) NSString *coverImageUrlString; // @synthesize coverImageUrlString=_coverImageUrlString;
@property(nonatomic) _Bool hasConnectedOtherRoom; // @synthesize hasConnectedOtherRoom=_hasConnectedOtherRoom;
@property(copy, nonatomic) NSString *sdkNewPkSign; // @synthesize sdkNewPkSign=_sdkNewPkSign;
@property(copy, nonatomic) NSString *sdkPkSign; // @synthesize sdkPkSign=_sdkPkSign;
@property(nonatomic) unsigned int sdkRoomId; // @synthesize sdkRoomId=_sdkRoomId;
@property(nonatomic) _Bool isCurrentAnchor; // @synthesize isCurrentAnchor=_isCurrentAnchor;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(nonatomic) unsigned int micUserAttrFlag; // @synthesize micUserAttrFlag=_micUserAttrFlag;
@property(nonatomic) unsigned long long expiredTime; // @synthesize expiredTime=_expiredTime;
@property(nonatomic) _Bool isSelf; // @synthesize isSelf=_isSelf;
@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
@property(nonatomic) unsigned int boardType; // @synthesize boardType=_boardType;
@property(copy, nonatomic) NSString *boardKey; // @synthesize boardKey=_boardKey;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *sdkUserId; // @synthesize sdkUserId=_sdkUserId;
@property(nonatomic) unsigned long long tryCloseCount; // @synthesize tryCloseCount=_tryCloseCount;
@property(nonatomic) unsigned long long localCloseState; // @synthesize localCloseState=_localCloseState;
@property(nonatomic) _Bool isConnectWaiting; // @synthesize isConnectWaiting=_isConnectWaiting;
@property(nonatomic) _Bool isConnecting; // @synthesize isConnecting=_isConnecting;
@property(nonatomic) unsigned long long userState; // @synthesize userState=_userState;
@property(nonatomic) _Bool initialUseVideo; // @synthesize initialUseVideo=_initialUseVideo;
@property(nonatomic) _Bool useVideo; // @synthesize useVideo=_useVideo;
@property(retain, nonatomic) WCFinderContact *connectMicFinderContact; // @synthesize connectMicFinderContact=_connectMicFinderContact;
- (void)updateInfoFromServerWithOtherUserInfo:(id)arg1;
- (void)resetAllStatusValue:(_Bool)arg1;
- (void)resetStatus;
- (void)updateBadgeInfo:(id)arg1;
@property(readonly, nonatomic) _Bool isFinderAuthor;
@property(readonly, nonatomic) _Bool isNeedInviteAudience;
@property(readonly, nonatomic) _Bool needInvite;
- (_Bool)isSelfUser;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getLocationName;
- (_Bool)isMicAnonymousUser;
@property(readonly, nonatomic) _Bool hasAnchorAudioModeBackground;

@end

