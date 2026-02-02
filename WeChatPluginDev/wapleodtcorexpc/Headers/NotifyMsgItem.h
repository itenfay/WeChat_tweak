//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NotifyMsgItem : NSObject
{
    _Bool _bExposed;
    _Bool _bLiveEnd;
    _Bool _bRejected;
    _Bool _isLiveAutoPlaying;
    _Bool _useCustomNotifySetting;
    unsigned int _nextRefreshTime;
    unsigned int _ctrlType;
    unsigned int _deliveryTime;
    unsigned int _msgType;
    unsigned int _noticeType;
    NSString *_templateID;
    NSString *_avatarUrl;
    NSString *_nickName;
    NSString *_authIconUrl;
    NSString *_thumbImageUrl;
    NSString *_header;
    NSArray *_displayList;
    NSArray *_extDisplayList;
    NSString *_tail;
    NSString *_feedID;
    NSString *_tipsID;
    NSString *_liveID;
    NSString *_nonceID;
    NSString *_noticeID;
    NSString *_byPassInfo;
    NSString *_revokeID;
    unsigned long long _controlFlag;
    NSString *_reportExtInfo;
    NSString *_pForcePushInfo;
    NSString *_previewTitle;
    NSString *_finderUsername;
    NSString *_liveAudiencePlayUrl;
    NSString *_liveDescription;
    NSString *_xml;
    NSString *_rejectWording;
    NSString *_recoverWording;
    NSString *_rejectStatusWording;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useCustomNotifySetting; // @synthesize useCustomNotifySetting=_useCustomNotifySetting;
@property(nonatomic) unsigned int noticeType; // @synthesize noticeType=_noticeType;
@property(retain, nonatomic) NSString *rejectStatusWording; // @synthesize rejectStatusWording=_rejectStatusWording;
@property(retain, nonatomic) NSString *recoverWording; // @synthesize recoverWording=_recoverWording;
@property(retain, nonatomic) NSString *rejectWording; // @synthesize rejectWording=_rejectWording;
@property(retain, nonatomic) NSString *xml; // @synthesize xml=_xml;
@property(nonatomic) _Bool isLiveAutoPlaying; // @synthesize isLiveAutoPlaying=_isLiveAutoPlaying;
@property(retain, nonatomic) NSString *liveDescription; // @synthesize liveDescription=_liveDescription;
@property(retain, nonatomic) NSString *liveAudiencePlayUrl; // @synthesize liveAudiencePlayUrl=_liveAudiencePlayUrl;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSString *previewTitle; // @synthesize previewTitle=_previewTitle;
@property(retain, nonatomic) NSString *pForcePushInfo; // @synthesize pForcePushInfo=_pForcePushInfo;
@property(retain, nonatomic) NSString *reportExtInfo; // @synthesize reportExtInfo=_reportExtInfo;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) unsigned long long controlFlag; // @synthesize controlFlag=_controlFlag;
@property(nonatomic) unsigned int deliveryTime; // @synthesize deliveryTime=_deliveryTime;
@property(nonatomic) unsigned int ctrlType; // @synthesize ctrlType=_ctrlType;
@property(retain, nonatomic) NSString *revokeID; // @synthesize revokeID=_revokeID;
@property(retain, nonatomic) NSString *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(retain, nonatomic) NSString *noticeID; // @synthesize noticeID=_noticeID;
@property(retain, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(retain, nonatomic) NSString *liveID; // @synthesize liveID=_liveID;
@property(retain, nonatomic) NSString *tipsID; // @synthesize tipsID=_tipsID;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(retain, nonatomic) NSString *tail; // @synthesize tail=_tail;
@property(retain, nonatomic) NSArray *extDisplayList; // @synthesize extDisplayList=_extDisplayList;
@property(retain, nonatomic) NSArray *displayList; // @synthesize displayList=_displayList;
@property(retain, nonatomic) NSString *header; // @synthesize header=_header;
@property(retain, nonatomic) NSString *thumbImageUrl; // @synthesize thumbImageUrl=_thumbImageUrl;
@property(retain, nonatomic) NSString *authIconUrl; // @synthesize authIconUrl=_authIconUrl;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
@property(nonatomic) unsigned int nextRefreshTime; // @synthesize nextRefreshTime=_nextRefreshTime;
@property(nonatomic) _Bool bRejected; // @synthesize bRejected=_bRejected;
@property(nonatomic) _Bool bLiveEnd; // @synthesize bLiveEnd=_bLiveEnd;
@property(nonatomic) _Bool bExposed; // @synthesize bExposed=_bExposed;
- (_Bool)shouldUseDynamicReason;
- (_Bool)isSubscribe;
- (_Bool)forceShowLivePush;
- (_Bool)disableComplaintEntry;
- (_Bool)disableBlackNoticeButton;
- (_Bool)disableReplace;
- (void)parseExtInfoWithXmlNode:(struct XmlReaderNode_t *)arg1 content:(id)arg2;
- (_Bool)updateExtInfoAttrKey:(id)arg1 value:(id)arg2 toXml:(id)arg3;
- (_Bool)parseExtInfoWithXmlContent:(id)arg1;
- (void)parseStateWithXmlReader:(struct XmlReaderNode_t *)arg1;
- (id)genStatExtXml;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

