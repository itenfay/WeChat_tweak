//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameJoinTeamSetting_GameTeamUpSpecialGiftSetting;

@interface MMLiveAnchorStatusItem : NSObject
{
    _Bool _focusModeOnInNormalConnectMic;
    unsigned int _curJoinTeamMode;
    unsigned int _curSetted_value;
    unsigned int _lotteryAttendType;
    unsigned long long _anchorStatusFlags;
    unsigned long long _settingFlag;
    unsigned long long _lotterySettingFlag;
    unsigned long long _anchorStatusFlagVersion;
    GameJoinTeamSetting_GameTeamUpSpecialGiftSetting *_specialGiftSetting;
    unsigned long long _timeMs;
}

- (void).cxx_destruct;
@property unsigned long long timeMs; // @synthesize timeMs=_timeMs;
@property(retain, nonatomic) GameJoinTeamSetting_GameTeamUpSpecialGiftSetting *specialGiftSetting; // @synthesize specialGiftSetting=_specialGiftSetting;
@property _Bool focusModeOnInNormalConnectMic; // @synthesize focusModeOnInNormalConnectMic=_focusModeOnInNormalConnectMic;
@property unsigned long long anchorStatusFlagVersion; // @synthesize anchorStatusFlagVersion=_anchorStatusFlagVersion;
@property unsigned int lotteryAttendType; // @synthesize lotteryAttendType=_lotteryAttendType;
@property unsigned long long lotterySettingFlag; // @synthesize lotterySettingFlag=_lotterySettingFlag;
@property unsigned long long settingFlag; // @synthesize settingFlag=_settingFlag;
@property unsigned int curSetted_value; // @synthesize curSetted_value=_curSetted_value;
@property unsigned int curJoinTeamMode; // @synthesize curJoinTeamMode=_curJoinTeamMode;
@property unsigned long long anchorStatusFlags; // @synthesize anchorStatusFlags=_anchorStatusFlags;
- (id)description;
- (int)setIsLiveShowAnchorLocationEnabled:(_Bool)arg1;
- (_Bool)isLiveShowAnchorLocationEnabled;
- (int)setEnablePaidConnectMic:(_Bool)arg1;
- (_Bool)enablePaidConnectMic;
- (int)setEnableAnchorRealtimeDataPanel:(_Bool)arg1;
- (_Bool)enableAnchorRealtimeDataPanel;
- (int)setEnableGiftWall:(_Bool)arg1;
- (_Bool)enableGiftWall;
- (int)setOpenGloryList:(_Bool)arg1;
- (int)setOpenSkinSeg:(_Bool)arg1;
- (_Bool)openSkinSeg;
- (int)setNoShopInfo:(_Bool)arg1;
- (_Bool)openGloryList;
- (_Bool)noShopInfo;
- (int)setGesturesEnabled:(_Bool)arg1;
- (_Bool)gesturesEnabled;
- (int)setEnableLiveSongs:(_Bool)arg1;
- (_Bool)enableLiveSongs;
- (int)setIsLiveMicTalkingEnabled:(_Bool)arg1;
- (_Bool)isLiveMicTalkingEnabled;
- (int)setIsHiddenAudienceName:(_Bool)arg1;
- (_Bool)isHiddenAudienceName;
- (int)setIsLiveEnableShowBiz:(_Bool)arg1;
- (_Bool)isLiveEnableShowBiz;
- (int)setFlag:(int)arg1 value:(_Bool)arg2;
- (void)updateLiveLotterySetting:(id)arg1;
- (void)updateLiveLotterySettingWithFlag:(unsigned long long)arg1 andType:(unsigned int)arg2;
- (void)setLiveMicSettingFlag:(unsigned long long)arg1;
- (void)setJoinGameTeamMode:(unsigned int)arg1;
- (_Bool)isLiveGameJoinTeamEnabled;
- (int)setIsLiveSysCallInterruption:(_Bool)arg1;
- (_Bool)isLiveSysCallInterruption;
- (int)setIsLiveEnterBackground:(_Bool)arg1;
- (_Bool)isLiveEnterBackground;
- (int)setIsLiveEnableAskProductQuestion:(_Bool)arg1;
- (_Bool)isLiveEnableAskProductQuestion;
- (int)setIsLiveCutByAntispam:(_Bool)arg1;
- (_Bool)isLiveCutByAntispam;
- (int)setIsLivePureAudioMode:(_Bool)arg1;
- (_Bool)isLivePureAudioMode;
- (int)setIsLiveConnectMicEnabled:(_Bool)arg1;
- (_Bool)isLiveConnectMicEnabled;
- (int)setIsLiveEnableLike:(_Bool)arg1;
- (_Bool)isLiveEnableLike;
- (int)setIsLiveBanLike:(_Bool)arg1;
- (_Bool)isLiveBanLike;
- (int)setIsLiveEnableComment:(_Bool)arg1;
- (_Bool)isLiveEnableComment;
- (int)setIsLiveBanComment:(_Bool)arg1;
- (_Bool)isLiveBanComment;
- (int)setIsLiveEnableReward:(_Bool)arg1;
- (_Bool)isLiveEnableReward;
- (int)setIsLiveShoppingAvailable:(_Bool)arg1;
- (_Bool)isLiveShoppingAvailable;
- (_Bool)fromLiveExtInfo:(id)arg1;
- (id)getAnchorStatusBuffer;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLiveExtInfo:(id)arg1;

@end

