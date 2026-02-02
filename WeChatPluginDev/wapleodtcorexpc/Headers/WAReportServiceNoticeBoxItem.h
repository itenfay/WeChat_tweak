//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportServiceNoticeBoxItem
{
    unsigned int _opType;
    unsigned int _inBoxIndex;
    unsigned int _isMuted;
    unsigned int _firstExpose;
    unsigned int _noticeType;
    unsigned int _isRed;
    unsigned int _redCount;
    unsigned int _accountType;
    unsigned long long _opTimestamp;
    NSString *_serviceNoticeBoxUserName;
    NSString *_msgId;
    NSString *_content;
    unsigned long long _noticeTimestamp;
    NSString *_templateID;
    NSString *_liveId;
    NSString *_feedId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
@property(nonatomic) unsigned int accountType; // @synthesize accountType=_accountType;
@property(nonatomic) unsigned int redCount; // @synthesize redCount=_redCount;
@property(nonatomic) unsigned int isRed; // @synthesize isRed=_isRed;
@property(nonatomic) unsigned int noticeType; // @synthesize noticeType=_noticeType;
@property(nonatomic) unsigned int firstExpose; // @synthesize firstExpose=_firstExpose;
@property(nonatomic) unsigned int isMuted; // @synthesize isMuted=_isMuted;
@property(nonatomic) unsigned int inBoxIndex; // @synthesize inBoxIndex=_inBoxIndex;
@property(nonatomic) unsigned long long noticeTimestamp; // @synthesize noticeTimestamp=_noticeTimestamp;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(retain, nonatomic) NSString *serviceNoticeBoxUserName; // @synthesize serviceNoticeBoxUserName=_serviceNoticeBoxUserName;
@property(nonatomic) unsigned long long opTimestamp; // @synthesize opTimestamp=_opTimestamp;
@property(nonatomic) unsigned int opType; // @synthesize opType=_opType;
- (id)reportString;
- (int)reportID;

@end

