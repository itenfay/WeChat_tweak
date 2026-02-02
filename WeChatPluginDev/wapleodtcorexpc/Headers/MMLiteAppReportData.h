//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MMLiteAppReportData : NSObject
{
    long long _logType;
    long long _logAction;
    NSString *_sessionId;
    long long _sequenceId;
    NSString *_appId;
    NSString *_version;
    long long _scene;
    NSString *_uri;
    NSString *_logStringValue;
    long long _logUIntValue;
    long long _localTimeStamps;
    NSDictionary *_extInfo;
    NSString *_expandDimension1;
    NSString *_expandDimension2;
    NSString *_expandDimension3;
    long long _logIntValue;
    long long _elapsedTimeSinceFirstLog;
}

+ (id)LiteAppReportDataWithLogType:(long long)arg1 logAction:(long long)arg2 sessionId:(id)arg3 sequenceId:(long long)arg4 appId:(id)arg5 version:(id)arg6 scene:(long long)arg7 uri:(id)arg8 logStringValue:(id)arg9 logUIntValue:(long long)arg10 localTimeStamps:(long long)arg11 extInfo:(id)arg12 expandDimension1:(id)arg13 expandDimension2:(id)arg14 expandDimension3:(id)arg15 logIntValue:(long long)arg16 elapsedTimeSinceFirstLog:(long long)arg17;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long elapsedTimeSinceFirstLog; // @synthesize elapsedTimeSinceFirstLog=_elapsedTimeSinceFirstLog;
@property(readonly, nonatomic) long long logIntValue; // @synthesize logIntValue=_logIntValue;
@property(readonly, nonatomic) NSString *expandDimension3; // @synthesize expandDimension3=_expandDimension3;
@property(readonly, nonatomic) NSString *expandDimension2; // @synthesize expandDimension2=_expandDimension2;
@property(readonly, nonatomic) NSString *expandDimension1; // @synthesize expandDimension1=_expandDimension1;
@property(readonly, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(readonly, nonatomic) long long localTimeStamps; // @synthesize localTimeStamps=_localTimeStamps;
@property(readonly, nonatomic) long long logUIntValue; // @synthesize logUIntValue=_logUIntValue;
@property(readonly, nonatomic) NSString *logStringValue; // @synthesize logStringValue=_logStringValue;
@property(readonly, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(readonly, nonatomic) long long scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(readonly, nonatomic) long long sequenceId; // @synthesize sequenceId=_sequenceId;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) long long logAction; // @synthesize logAction=_logAction;
@property(readonly, nonatomic) long long logType; // @synthesize logType=_logType;
- (id)description;
- (id)initWithLogType:(long long)arg1 logAction:(long long)arg2 sessionId:(id)arg3 sequenceId:(long long)arg4 appId:(id)arg5 version:(id)arg6 scene:(long long)arg7 uri:(id)arg8 logStringValue:(id)arg9 logUIntValue:(long long)arg10 localTimeStamps:(long long)arg11 extInfo:(id)arg12 expandDimension1:(id)arg13 expandDimension2:(id)arg14 expandDimension3:(id)arg15 logIntValue:(long long)arg16 elapsedTimeSinceFirstLog:(long long)arg17;

@end

