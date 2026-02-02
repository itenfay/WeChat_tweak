//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BTLiveMsgReportItem
{
    _Bool _isClick;
    unsigned int _exposeTimestamp;
    unsigned int _sessionID;
    unsigned int _liveScene;
    NSString *_bizUserName;
    unsigned long long _brandMsgId;
    NSString *_liveExportID;
}

+ (id)reportKeyWithMsg:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int liveScene; // @synthesize liveScene=_liveScene;
@property(nonatomic) _Bool isClick; // @synthesize isClick=_isClick;
@property(copy, nonatomic) NSString *liveExportID; // @synthesize liveExportID=_liveExportID;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int exposeTimestamp; // @synthesize exposeTimestamp=_exposeTimestamp;
@property(nonatomic) unsigned long long brandMsgId; // @synthesize brandMsgId=_brandMsgId;
@property(copy, nonatomic) NSString *bizUserName; // @synthesize bizUserName=_bizUserName;
- (id)toReportString;

@end

