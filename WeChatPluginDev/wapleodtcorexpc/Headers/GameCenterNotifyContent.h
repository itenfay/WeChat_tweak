//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameCenterEntranceInfo, GameCenterMsgBannerInfo, GameCenterMsgBubbleInfo, GameCenterMsgFloayLayerInfo, GameCenterTabInfoNode, GameLifeInfo, GameMsgExtraData, GamePreloadResourceData, NSString;

@interface GameCenterNotifyContent : NSObject
{
    _Bool _disabledReport;
    int _type;
    int _msgReportType;
    unsigned int _localId;
    GameCenterEntranceInfo *_entranceInfo;
    GameCenterMsgBubbleInfo *_bubbleInfo;
    GameCenterMsgFloayLayerInfo *_floatLayerInfo;
    GameCenterMsgBannerInfo *_bannerInfo;
    GameLifeInfo *_gameLifeInfo;
    GameMsgExtraData *_gameMsgExtraData;
    GameCenterTabInfoNode *_tabInfoNode;
    GamePreloadResourceData *_preloadResourceData;
    NSString *_svrMsgId;
    NSString *_appId;
    NSString *_noticeId;
    NSString *_originMsg;
    NSString *_reportExtData;
    NSString *_businessData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *businessData; // @synthesize businessData=_businessData;
@property(retain, nonatomic) NSString *reportExtData; // @synthesize reportExtData=_reportExtData;
@property(retain, nonatomic) NSString *originMsg; // @synthesize originMsg=_originMsg;
@property(retain, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *svrMsgId; // @synthesize svrMsgId=_svrMsgId;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) _Bool disabledReport; // @synthesize disabledReport=_disabledReport;
@property(nonatomic) int msgReportType; // @synthesize msgReportType=_msgReportType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) GamePreloadResourceData *preloadResourceData; // @synthesize preloadResourceData=_preloadResourceData;
@property(retain, nonatomic) GameCenterTabInfoNode *tabInfoNode; // @synthesize tabInfoNode=_tabInfoNode;
@property(retain, nonatomic) GameMsgExtraData *gameMsgExtraData; // @synthesize gameMsgExtraData=_gameMsgExtraData;
@property(retain, nonatomic) GameLifeInfo *gameLifeInfo; // @synthesize gameLifeInfo=_gameLifeInfo;
@property(retain, nonatomic) GameCenterMsgBannerInfo *bannerInfo; // @synthesize bannerInfo=_bannerInfo;
@property(retain, nonatomic) GameCenterMsgFloayLayerInfo *floatLayerInfo; // @synthesize floatLayerInfo=_floatLayerInfo;
@property(retain, nonatomic) GameCenterMsgBubbleInfo *bubbleInfo; // @synthesize bubbleInfo=_bubbleInfo;
@property(retain, nonatomic) GameCenterEntranceInfo *entranceInfo; // @synthesize entranceInfo=_entranceInfo;
- (_Bool)isValidContent;
@property(readonly, nonatomic) NSString *floatLayerUrl;
@property(readonly, nonatomic) long long floatLayerType;
- (long long)entranceNotifyType;

@end

