//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameCenterMsgActionInfo, GameCenterMsgAppInfo, GameCenterMsgBubbleInfoOld, GameCenterMsgControlInfo, NSString;

@interface GameCenterOldBaseMsg
{
    NSString *_noticeId;
    GameCenterMsgAppInfo *_appInfo;
    GameCenterMsgBubbleInfoOld *_bubbleInfoOld;
    GameCenterMsgControlInfo *_controlInfo;
    NSString *_formatContent;
    NSString *_url;
    GameCenterMsgActionInfo *_actionInfo;
}

+ (id)parseFromDbItem:(id)arg1;
+ (id)parseFromMsgWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) GameCenterMsgActionInfo *actionInfo; // @synthesize actionInfo=_actionInfo;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *formatContent; // @synthesize formatContent=_formatContent;
@property(retain, nonatomic) GameCenterMsgControlInfo *controlInfo; // @synthesize controlInfo=_controlInfo;
@property(retain, nonatomic) GameCenterMsgBubbleInfoOld *bubbleInfoOld; // @synthesize bubbleInfoOld=_bubbleInfoOld;
@property(retain, nonatomic) GameCenterMsgAppInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;
- (int)getMsgReportType;
- (unsigned int)createTime;
- (id)getNoticeid;
- (id)appid;
- (_Bool)notInMsgCenter;
- (_Bool)isExpired;
- (id)getMsgCardInfo;
- (id)getSourceInfo;
- (id)getMsgCenterContent;
- (id)transBubbleInfo:(id)arg1;
- (id)getNotifyContent;
- (id)parseBubbleInfoOld:(struct XmlReaderNode_t *)arg1;
- (id)parseFloatLayerInfoOld:(struct XmlReaderNode_t *)arg1;
- (id)parseEntranceInfoOld:(struct XmlReaderNode_t *)arg1;
- (id)initWithXmlNode:(struct XmlReaderNode_t *)arg1;

@end

