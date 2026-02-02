//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSString;

@interface SimpleMsgInfo
{
    unsigned int m_uiMsgLocalID;
    unsigned int m_uiMsgType;
    NSString *_m_nsChatName;
    NSString *_m_nsSessionName;
    CMessageWrap *_m_msg;
    unsigned long long _m_msgRelatedSize;
}

+ (_Bool)isFinderMsg:(id)arg1;
+ (_Bool)isAppMusicMsg:(id)arg1;
+ (_Bool)isAppPayMsg:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long m_msgRelatedSize; // @synthesize m_msgRelatedSize=_m_msgRelatedSize;
@property(retain, nonatomic) CMessageWrap *m_msg; // @synthesize m_msg=_m_msg;
@property(retain, nonatomic) NSString *m_nsSessionName; // @synthesize m_nsSessionName=_m_nsSessionName;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName=_m_nsChatName;
@property(nonatomic) unsigned int m_uiMsgType; // @synthesize m_uiMsgType;
@property(readonly, nonatomic) unsigned int m_uiMsgLocalID; // @synthesize m_uiMsgLocalID;
- (id)getSessionName;
- (unsigned long long)getMsgRelatedResourceSize;
- (_Bool)isFinderMsg;
- (id)getImgUUID;
- (_Bool)isWeAppMsg;
- (id)getThumbUrl;
- (_Bool)isUseWebImg;
- (_Bool)isGroupNoticeMsg;
- (_Bool)isVideoMsg;
- (_Bool)isBrandMpVideoMsg;
- (_Bool)isImgMsg;
- (_Bool)isFileMsg;
- (_Bool)isAppFileMsg;
- (_Bool)isAppRecordMsg;
- (_Bool)isAppNoteMsg;
- (_Bool)isAppVideoMsg;
- (_Bool)isAppMusicMsg;
- (_Bool)isAppUrlMsg;
- (id)getThumbOfAppMessage:(id)arg1;
- (id)getIconName;
- (id)getDefaultImg;
- (id)getTitle;
- (unsigned int)getVideoTime;
- (id)getImgPath;
- (id)getImageData;
- (id)getImage;
- (id)getMsg;
- (id)getSquareImgDir;
- (void)setM_strMsgLocalID:(id)arg1;
- (id)init;

@end

