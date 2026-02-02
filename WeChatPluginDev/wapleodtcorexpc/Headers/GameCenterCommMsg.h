//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameCenterMsgBubbleInfo, GameCenterMsgMessageCenterInfo, GameCenterMsgReportInfo, GameCenterMsgTimeInfo, GameCenterMsgV2Node, GameCenterTabInfoNode, GameLifeInfo, NSString;

@interface GameCenterCommMsg
{
    NSString *_appId;
    GameCenterMsgBubbleInfo *_bubbleInfo;
    GameCenterMsgTimeInfo *_timeInfo;
    GameCenterMsgMessageCenterInfo *_msgCenterInfo;
    GameCenterMsgReportInfo *_reportInfo;
    GameCenterMsgV2Node *_msgV2Node;
    GameCenterTabInfoNode *_tabInfoNode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameCenterTabInfoNode *tabInfoNode; // @synthesize tabInfoNode=_tabInfoNode;
@property(retain, nonatomic) GameCenterMsgV2Node *msgV2Node; // @synthesize msgV2Node=_msgV2Node;
@property(retain, nonatomic) GameCenterMsgReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(retain, nonatomic) GameCenterMsgMessageCenterInfo *msgCenterInfo; // @synthesize msgCenterInfo=_msgCenterInfo;
@property(retain, nonatomic) GameCenterMsgTimeInfo *timeInfo; // @synthesize timeInfo=_timeInfo;
@property(retain, nonatomic) GameCenterMsgBubbleInfo *bubbleInfo; // @synthesize bubbleInfo=_bubbleInfo;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)getReportExtData;
- (int)getMsgReportType;
- (id)getNoticeid;
- (id)appid;
- (unsigned int)createTime;
- (_Bool)notInMsgCenter;
- (double)timeBeforeExpire;
- (_Bool)isExpired;
- (void)updateMsgCenterV2Content;
- (id)getNotifyContent;
- (void)parseMessageExposureStrategy:(struct XmlReaderNode_t *)arg1;
- (id)parseGameMsgExtraData:(struct XmlReaderNode_t *)arg1;
- (id)parseGameLifeInfoChatRoom:(struct XmlReaderNode_t *)arg1;
- (id)parseGameLifeInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseTabInfoNode:(struct XmlReaderNode_t *)arg1;
- (id)parseMsgSourceInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseMsgSecondLineInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseUserInfoList:(struct XmlReaderNode_t *)arg1;
- (id)parseMsgCardInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseContentPic:(struct XmlReaderNode_t *)arg1;
- (id)parseMsgSender:(struct XmlReaderNode_t *)arg1;
- (id)parseMsgCenterInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseReportInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseBubbleInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseNestWepkgs:(struct XmlReaderNode_t *)arg1;
- (id)parseBannerInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseFloatLayerInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseEntranceInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseTimeInfo:(struct XmlReaderNode_t *)arg1;
- (id)parseGameMsgV2Node:(struct XmlReaderNode_t *)arg1;
- (id)parseWePkgPreloadInfo:(struct XmlReaderNode_t *)arg1;
- (id)initWithXmlNode:(struct XmlReaderNode_t *)arg1;

// Remaining properties
@property(retain, nonatomic) GameLifeInfo *gameLifeInfo;

@end

