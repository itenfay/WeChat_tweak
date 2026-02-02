//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId;

@interface WCLiveScrollActionSheetViewModel : NSObject
{
    _Bool _isInStopState;
    MMFinderLiveTaskId *_taskId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInStopState; // @synthesize isInStopState=_isInStopState;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (_Bool)showComplain;
- (id)liveTask;
- (_Bool)isDislikeEnable;
- (_Bool)isAnchorCustomizeRewardEnabled;
- (_Bool)isRewardItemExpose;
- (_Bool)isLiveQrCodeEnableForAudience;
- (_Bool)isLiveQrCodeEnableForAnchor;
- (_Bool)enableShowPerformanceAnalysisEntrance;
- (_Bool)enableShowGameCanvasDebugEntrance;
- (_Bool)isLiveThemeReminderSwitchOpen;
- (_Bool)canShowScreenShare;
- (_Bool)canShowPromote;
- (_Bool)canShowVote;
- (_Bool)enableConnectMicEntrance;
- (_Bool)enableShowTrafficEntrance;
- (_Bool)enableShowOpPromotionCardEntrance;
- (_Bool)canShowCreatorCenter;
- (_Bool)enableShowFansGroupEntrance;
- (_Bool)enableDataBoardEntrance;
- (_Bool)isShowEntranceForFeedbackHelp;
- (_Bool)isLiveGameJoinTeamEnabled;
- (_Bool)isLiveGameTeamUpSwitchButtonEnable;
- (_Bool)isLikeAnchorOrAssistantEntrenceEnable;
- (_Bool)isRewardAnchorOrAssistantEntrenceEnable;
- (unsigned int)anchorSwitchFlag;
- (_Bool)isHiddenAudienceName;
- (_Bool)isHiddenAudienceNameEnable;
- (_Bool)isMicMuted;
- (_Bool)isCameraClosed;
- (_Bool)isLiveGiftEffectOff;
- (_Bool)isCommentAssistantEnable;
- (_Bool)isConcertTicket;
- (_Bool)isShareEnable;
- (_Bool)isRewardEnable;
- (_Bool)isConnectMicEnabled;
- (_Bool)isLikeEnable;
- (_Bool)isCommentEnable;
- (_Bool)isCurrentInMainScene;
- (id)initWithTaskId:(id)arg1;

@end

