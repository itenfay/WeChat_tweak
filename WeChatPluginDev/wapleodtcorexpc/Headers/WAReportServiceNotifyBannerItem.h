//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportServiceNotifyBannerItem
{
    unsigned int _opType;
    unsigned int _noticeType;
    unsigned int _accountType;
    unsigned long long _opTimestamp;
    NSString *_serviceNotifyBannerUserName;
    NSString *_msgId;
    NSString *_content;
    unsigned long long _noticeTimestamp;
    NSString *_liveId;
    NSString *_feedId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(nonatomic) unsigned int accountType; // @synthesize accountType=_accountType;
@property(nonatomic) unsigned int noticeType; // @synthesize noticeType=_noticeType;
@property(nonatomic) unsigned long long noticeTimestamp; // @synthesize noticeTimestamp=_noticeTimestamp;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(retain, nonatomic) NSString *serviceNotifyBannerUserName; // @synthesize serviceNotifyBannerUserName=_serviceNotifyBannerUserName;
@property(nonatomic) unsigned long long opTimestamp; // @synthesize opTimestamp=_opTimestamp;
@property(nonatomic) unsigned int opType; // @synthesize opType=_opType;
- (id)reportString;
- (int)reportID;

@end

