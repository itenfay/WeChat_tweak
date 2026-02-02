//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC6WeChat17MagicBrushMonitor : NSObject
{
    MISSING_TYPE *$__lazy_storage_$_rand;
}

+ (void)magicClickReportWithBizName:(id)arg1 subScene:(long long)arg2 reportTime:(unsigned long long)arg3 clickId:(id)arg4 role:(long long)arg5 eventType:(long long)arg6 action:(long long)arg7 status:(long long)arg8 errCode:(long long)arg9 extraInfo:(id)arg10 cardName:(id)arg11;
+ (void)performanceReportWithBizName:(id)arg1 sessionId:(id)arg2 cardName:(id)arg3 scene:(long long)arg4 costTime:(long long)arg5 extras:(id)arg6 jsonExtra:(id)arg7;
+ (void)kvReportWithKeyStr:(id)arg1 value:(long long)arg2 extra:(id)arg3;
+ (void)kvReportWithKey:(long long)arg1 value:(long long)arg2 extra:(id)arg3 sampleRate:(float)arg4;
+ (void)kvReportWithKey:(long long)arg1 value:(long long)arg2 extra:(id)arg3;
- (id)init;

@end

