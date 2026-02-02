//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameCenterEntranceInfo, GameCenterMsgBannerInfo, GameCenterMsgCenterContent, GameCenterMsgFloayLayerInfo, GameCenterMsgSimplePbData, GameCenterNotifyContent, GameCenterWePkgPreloadInfo, GameLifeInfo, GameMsgExtraData, GamePreloadResourceData, MessageExposureStrategy, NSArray, NSMutableDictionary, NSString;

@interface GameCenterBaseMsg : NSObject
{
    _Bool _wifiFlag;
    _Bool _disableReport;
    _Bool _needReExposure;
    _Bool _isGreet;
    unsigned int _localId;
    unsigned int _msgRecvTime;
    unsigned int _msgRecvServerTime;
    unsigned int _firstExposureTime;
    unsigned int _showType;
    unsigned int _mergeCount;
    unsigned int _alreadyMergedCount;
    unsigned int _msgExposureState;
    unsigned int _maxExposureCnt;
    unsigned int _msgExposureCnt;
    unsigned int _completeExposureCnt;
    int _redPointQueueType;
    int _msgStateOptions;
    float _exposureRateScore;
    float _calcluateScore;
    unsigned int _relationType;
    long long _type;
    NSString *_svrMsgId;
    NSString *_weightStr;
    NSString *_mergeId;
    GameCenterEntranceInfo *_entranceInfo;
    GameCenterMsgFloayLayerInfo *_floatLayerInfo;
    GameCenterMsgBannerInfo *_bannerInfo;
    GameLifeInfo *_gameLifeInfo;
    GameMsgExtraData *_gameMsgExtraData;
    GamePreloadResourceData *_preloadResourceData;
    NSArray *_userInfoList;
    NSMutableDictionary *_jumpInfoDic;
    GameCenterWePkgPreloadInfo *_wePkgPreloadInfo;
    MessageExposureStrategy *_exposureStrategy;
    NSString *_calculateInfo;
    NSString *_pushId;
    NSString *_quickResponseContentId;
    NSString *_originMsg;
    GameCenterNotifyContent *_notifyContent;
    GameCenterMsgCenterContent *_msgCenterContent;
    GameCenterMsgSimplePbData *_simplePbData;
    NSMutableDictionary *_exposureScoreDict;
    NSMutableDictionary *_fullExposureScoreDict;
    NSString *_contentId;
}

+ (id)parseFromDbItem:(id)arg1;
+ (id)parseFromMsgWrap:(id)arg1 RootNode:(struct XmlReaderNode_t *)arg2;
+ (id)msgWithType:(unsigned int)arg1 xmlNode:(struct XmlReaderNode_t *)arg2;
+ (struct XmlReaderNode_t *)getRootNode:(id)arg1 XmlReader:(struct CXmlReader)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(retain, nonatomic) NSMutableDictionary *fullExposureScoreDict; // @synthesize fullExposureScoreDict=_fullExposureScoreDict;
@property(retain, nonatomic) NSMutableDictionary *exposureScoreDict; // @synthesize exposureScoreDict=_exposureScoreDict;
@property(retain, nonatomic) GameCenterMsgSimplePbData *simplePbData; // @synthesize simplePbData=_simplePbData;
@property(retain, nonatomic) GameCenterMsgCenterContent *msgCenterContent; // @synthesize msgCenterContent=_msgCenterContent;
@property(retain, nonatomic) GameCenterNotifyContent *notifyContent; // @synthesize notifyContent=_notifyContent;
@property(retain, nonatomic) NSString *originMsg; // @synthesize originMsg=_originMsg;
@property(nonatomic) unsigned int relationType; // @synthesize relationType=_relationType;
@property(nonatomic) _Bool isGreet; // @synthesize isGreet=_isGreet;
@property(retain, nonatomic) NSString *quickResponseContentId; // @synthesize quickResponseContentId=_quickResponseContentId;
@property(retain, nonatomic) NSString *pushId; // @synthesize pushId=_pushId;
@property(retain, nonatomic) NSString *calculateInfo; // @synthesize calculateInfo=_calculateInfo;
@property(nonatomic) float calcluateScore; // @synthesize calcluateScore=_calcluateScore;
@property(nonatomic) float exposureRateScore; // @synthesize exposureRateScore=_exposureRateScore;
@property(retain, nonatomic) MessageExposureStrategy *exposureStrategy; // @synthesize exposureStrategy=_exposureStrategy;
@property(nonatomic) int msgStateOptions; // @synthesize msgStateOptions=_msgStateOptions;
@property(nonatomic) int redPointQueueType; // @synthesize redPointQueueType=_redPointQueueType;
@property(nonatomic) unsigned int completeExposureCnt; // @synthesize completeExposureCnt=_completeExposureCnt;
@property(nonatomic) unsigned int msgExposureCnt; // @synthesize msgExposureCnt=_msgExposureCnt;
@property(nonatomic) unsigned int maxExposureCnt; // @synthesize maxExposureCnt=_maxExposureCnt;
@property(retain, nonatomic) GameCenterWePkgPreloadInfo *wePkgPreloadInfo; // @synthesize wePkgPreloadInfo=_wePkgPreloadInfo;
@property(retain, nonatomic) NSMutableDictionary *jumpInfoDic; // @synthesize jumpInfoDic=_jumpInfoDic;
@property(retain, nonatomic) NSArray *userInfoList; // @synthesize userInfoList=_userInfoList;
@property(nonatomic) unsigned int msgExposureState; // @synthesize msgExposureState=_msgExposureState;
@property(nonatomic) _Bool needReExposure; // @synthesize needReExposure=_needReExposure;
@property(retain, nonatomic) GamePreloadResourceData *preloadResourceData; // @synthesize preloadResourceData=_preloadResourceData;
@property(retain, nonatomic) GameMsgExtraData *gameMsgExtraData; // @synthesize gameMsgExtraData=_gameMsgExtraData;
@property(retain, nonatomic) GameLifeInfo *gameLifeInfo; // @synthesize gameLifeInfo=_gameLifeInfo;
@property(retain, nonatomic) GameCenterMsgBannerInfo *bannerInfo; // @synthesize bannerInfo=_bannerInfo;
@property(retain, nonatomic) GameCenterMsgFloayLayerInfo *floatLayerInfo; // @synthesize floatLayerInfo=_floatLayerInfo;
@property(retain, nonatomic) GameCenterEntranceInfo *entranceInfo; // @synthesize entranceInfo=_entranceInfo;
@property(nonatomic) _Bool disableReport; // @synthesize disableReport=_disableReport;
@property(nonatomic) unsigned int alreadyMergedCount; // @synthesize alreadyMergedCount=_alreadyMergedCount;
@property(nonatomic) unsigned int mergeCount; // @synthesize mergeCount=_mergeCount;
@property(nonatomic) unsigned int showType; // @synthesize showType=_showType;
@property(nonatomic) _Bool wifiFlag; // @synthesize wifiFlag=_wifiFlag;
@property(retain, nonatomic) NSString *mergeId; // @synthesize mergeId=_mergeId;
@property(retain, nonatomic) NSString *weightStr; // @synthesize weightStr=_weightStr;
@property(retain, nonatomic) NSString *svrMsgId; // @synthesize svrMsgId=_svrMsgId;
@property(nonatomic) unsigned int firstExposureTime; // @synthesize firstExposureTime=_firstExposureTime;
@property(nonatomic) unsigned int msgRecvServerTime; // @synthesize msgRecvServerTime=_msgRecvServerTime;
@property(nonatomic) unsigned int msgRecvTime; // @synthesize msgRecvTime=_msgRecvTime;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;
- (_Bool)isPluginMsg;
- (id)getReportExtData;
- (id)getNoticeid;
- (id)appid;
- (unsigned int)createTime;
- (_Bool)notInMsgCenter;
- (_Bool)isOverMaxExposureCnt;
- (double)timeBeforeExpire;
- (_Bool)isExpired;
- (int)getMsgReportType;
- (id)parseUserInfo:(struct XmlReaderNode_t *)arg1;
- (id)getJumpInfo:(struct XmlReaderNode_t *)arg1 jumpIdAttrributeName:(const char *)arg2;
- (id)getJumpInfo:(struct XmlReaderNode_t *)arg1;
- (_Bool)weightMoreThan:(id)arg1;
- (void)updateMsgCenterV2Content;
- (id)getMsgCenterContent;
- (id)getNotifyContent;
- (id)halfScreenFormNode:(struct XmlReaderNode_t *)arg1;
- (id)parseJumpInfo:(struct XmlReaderNode_t *)arg1;
- (id)initWithXmlNode:(struct XmlReaderNode_t *)arg1;

@end

