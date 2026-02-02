//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveGameTeamInfo_FinderGameLiveAppInfo, FinderLiveGameTeamInfo_FinderGameLiveWxaExtraJoinInfo, FinderLiveGameTeamInfo_GameLiveEnablePaymentPanelInfo, FinderLiveGameTeamInfo_GameTeamUpInfoForAndience, FinderLiveGameTeamInfo_StartLiveGuide, FinderLiveGameTeamInfo_WeappJumpInfo, NSString;

@interface MMFinderLiveGameTeamInfo : NSObject
{
    _Bool _disable;
    unsigned int _status;
    unsigned int _inTeamingUp;
    unsigned int _isTeamFull;
    unsigned int _teamupGiftStatus;
    unsigned int _teamupGiftReddot;
    NSString *_title;
    NSString *_rankDesc;
    NSString *_teamupMemberDesc;
    NSString *_launchParam;
    NSString *_bubbleInfo;
    FinderLiveGameTeamInfo_GameLiveEnablePaymentPanelInfo *_panelInfo;
    NSString *_teamupGiftDesc;
    FinderLiveGameTeamInfo_WeappJumpInfo *_teamupGiftJumpInfo;
    NSString *_reddotId;
    NSString *_teamupGiftIcon;
    NSString *_teamupGiftWordingColor;
    NSString *_teamupGiftBackgroundColor;
    NSString *_teamupMemberDescForAging;
    FinderLiveGameTeamInfo_StartLiveGuide *_startLiveGuide;
    NSString *_gameDesc;
    FinderLiveGameTeamInfo_WeappJumpInfo *_wxaJumpInfo;
    NSString *_joinGameButtonText;
    FinderLiveGameTeamInfo_FinderGameLiveWxaExtraJoinInfo *_wxaExtraJoinInfo;
    FinderLiveGameTeamInfo_FinderGameLiveAppInfo *_gameAppInfo;
    FinderLiveGameTeamInfo_GameTeamUpInfoForAndience *_gameTeamupInfoForAudience;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveGameTeamInfo_GameTeamUpInfoForAndience *gameTeamupInfoForAudience; // @synthesize gameTeamupInfoForAudience=_gameTeamupInfoForAudience;
@property(retain, nonatomic) FinderLiveGameTeamInfo_FinderGameLiveAppInfo *gameAppInfo; // @synthesize gameAppInfo=_gameAppInfo;
@property(retain, nonatomic) FinderLiveGameTeamInfo_FinderGameLiveWxaExtraJoinInfo *wxaExtraJoinInfo; // @synthesize wxaExtraJoinInfo=_wxaExtraJoinInfo;
@property(retain, nonatomic) NSString *joinGameButtonText; // @synthesize joinGameButtonText=_joinGameButtonText;
@property(retain, nonatomic) FinderLiveGameTeamInfo_WeappJumpInfo *wxaJumpInfo; // @synthesize wxaJumpInfo=_wxaJumpInfo;
@property(retain, nonatomic) NSString *gameDesc; // @synthesize gameDesc=_gameDesc;
@property(retain, nonatomic) FinderLiveGameTeamInfo_StartLiveGuide *startLiveGuide; // @synthesize startLiveGuide=_startLiveGuide;
@property(retain, nonatomic) NSString *teamupMemberDescForAging; // @synthesize teamupMemberDescForAging=_teamupMemberDescForAging;
@property(retain, nonatomic) NSString *teamupGiftBackgroundColor; // @synthesize teamupGiftBackgroundColor=_teamupGiftBackgroundColor;
@property(retain, nonatomic) NSString *teamupGiftWordingColor; // @synthesize teamupGiftWordingColor=_teamupGiftWordingColor;
@property(retain, nonatomic) NSString *teamupGiftIcon; // @synthesize teamupGiftIcon=_teamupGiftIcon;
@property(retain, nonatomic) NSString *reddotId; // @synthesize reddotId=_reddotId;
@property(retain, nonatomic) FinderLiveGameTeamInfo_WeappJumpInfo *teamupGiftJumpInfo; // @synthesize teamupGiftJumpInfo=_teamupGiftJumpInfo;
@property(nonatomic) unsigned int teamupGiftReddot; // @synthesize teamupGiftReddot=_teamupGiftReddot;
@property(retain, nonatomic) NSString *teamupGiftDesc; // @synthesize teamupGiftDesc=_teamupGiftDesc;
@property(nonatomic) unsigned int teamupGiftStatus; // @synthesize teamupGiftStatus=_teamupGiftStatus;
@property(retain, nonatomic) FinderLiveGameTeamInfo_GameLiveEnablePaymentPanelInfo *panelInfo; // @synthesize panelInfo=_panelInfo;
@property(nonatomic) unsigned int isTeamFull; // @synthesize isTeamFull=_isTeamFull;
@property(retain, nonatomic) NSString *bubbleInfo; // @synthesize bubbleInfo=_bubbleInfo;
@property(nonatomic) unsigned int inTeamingUp; // @synthesize inTeamingUp=_inTeamingUp;
@property(retain, nonatomic) NSString *launchParam; // @synthesize launchParam=_launchParam;
@property(retain, nonatomic) NSString *teamupMemberDesc; // @synthesize teamupMemberDesc=_teamupMemberDesc;
@property(retain, nonatomic) NSString *rankDesc; // @synthesize rankDesc=_rankDesc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) _Bool disable; // @synthesize disable=_disable;
- (void)copyFromAppMsgGameTeamInfo:(id)arg1;
- (void)copyFromGameTeamInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)waGameJumpInfo;
@property(readonly, nonatomic) NSString *channelExtraDataForWAGame;
@property(readonly, nonatomic) _Bool isWAGame;
- (id)initWithAppMsgGameTeamInfo:(id)arg1;
- (id)initWithGameTeamInfo:(id)arg1;

@end

