//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface Event4XReporterApple : NSObject
{
    struct unique_ptr<liteav::Event4XReporter, std::default_delete<liteav::Event4XReporter>> reporter_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reportDau:(long long)arg1 code:(long long)arg2 info:(id)arg3;
- (long long)getColdDownTime;
- (void)sendReport;
- (void)setEventStringValue:(id)arg1 value:(id)arg2;
- (void)setEventIntValue:(id)arg1 value:(long long)arg2;
- (void)setCommonStringValue:(id)arg1 value:(id)arg2;
- (void)setCommonIntValue:(id)arg1 value:(long long)arg2;
- (id)initWithParams:(long long)arg1 module_id:(long long)arg2 stream_url:(id)arg3 report_device_info:(_Bool)arg4 data_type:(long long)arg5;

@end

