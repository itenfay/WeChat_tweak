//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BTLNotifyBarReportItem
{
    _Bool _isClick;
    unsigned int _exposeTimes;
    unsigned int _exposeTimestamp;
    unsigned int _msgType;
    NSString *_bizUserName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isClick; // @synthesize isClick=_isClick;
@property(copy, nonatomic) NSString *bizUserName; // @synthesize bizUserName=_bizUserName;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) unsigned int exposeTimestamp; // @synthesize exposeTimestamp=_exposeTimestamp;
@property(nonatomic) unsigned int exposeTimes; // @synthesize exposeTimes=_exposeTimes;

@end

