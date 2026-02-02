//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSNumber, NSString;

@interface GameWebViewClientReportRecord
{
    _Bool _reportOnExit;
    _Bool _isReportNow;
    _Bool _isImportant;
    _Bool _isTimeMillSecond;
    NSNumber *_logId;
    NSString *_reportStr;
    NSString *_timePlaceHolderKey;
    NSNumber *_reportDuration;
    unsigned long long _startTimeStamp;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isTimeMillSecond; // @synthesize isTimeMillSecond=_isTimeMillSecond;
@property(nonatomic) _Bool isImportant; // @synthesize isImportant=_isImportant;
@property(nonatomic) _Bool isReportNow; // @synthesize isReportNow=_isReportNow;
@property(nonatomic) unsigned long long startTimeStamp; // @synthesize startTimeStamp=_startTimeStamp;
@property(retain, nonatomic) NSNumber *reportDuration; // @synthesize reportDuration=_reportDuration;
@property(retain, nonatomic) NSString *timePlaceHolderKey; // @synthesize timePlaceHolderKey=_timePlaceHolderKey;
@property(retain, nonatomic) NSString *reportStr; // @synthesize reportStr=_reportStr;
@property(retain, nonatomic) NSNumber *logId; // @synthesize logId=_logId;
@property(nonatomic) _Bool reportOnExit; // @synthesize reportOnExit=_reportOnExit;
- (id)replaceStr:(id)arg1 occurrenceOfString:(id)arg2 withString:(id)arg3;
- (void)reportLogByOtherPageDurationSec:(double)arg1;
- (void)reportLog;

@end

