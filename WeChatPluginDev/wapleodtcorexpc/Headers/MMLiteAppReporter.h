//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiteAppReporter : NSObject
{
    struct Handle<std::shared_ptr<luggage::LiteAppReporter>> _cppRefHandle;
}

+ (id)create:(id)arg1 dependency:(id)arg2;
+ (id)makeLiteAppReporterWithoutAppId;
+ (id)makeLiteAppReporter:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setVersion:(id)arg1;
- (id)getVersion;
- (void)setAppId:(id)arg1;
- (id)getAppId;
- (void)logOtherWithExpandDimension1:(long long)arg1 expandDimension1:(id)arg2;
- (void)logOtherWithUri:(long long)arg1 uri:(id)arg2;
- (void)logOther:(long long)arg1 logStringValue:(id)arg2 extInfo:(id)arg3;
- (void)logOther:(long long)arg1 logIntValue:(long long)arg2 extInfo:(id)arg3;
- (void)logOther:(long long)arg1 extInfo:(id)arg2;
- (void)logOther:(long long)arg1 logStringValue:(id)arg2 logIntValue:(long long)arg3;
- (void)logOther:(long long)arg1 logStringValue:(id)arg2;
- (void)logOther:(long long)arg1 logIntValue:(long long)arg2;
- (void)logOther:(long long)arg1;
- (void)logDownloadWithExpandDimension1:(long long)arg1 expandDimension1:(id)arg2;
- (void)logDownloadWithUri:(long long)arg1 uri:(id)arg2;
- (void)logDownload:(long long)arg1 logStringValue:(id)arg2 extInfo:(id)arg3;
- (void)logDownload:(long long)arg1 logIntValue:(long long)arg2 extInfo:(id)arg3;
- (void)logDownload:(long long)arg1 extInfo:(id)arg2;
- (void)logDownload:(long long)arg1 logStringValue:(id)arg2 logIntValue:(long long)arg3;
- (void)logDownload:(long long)arg1 logStringValue:(id)arg2;
- (void)logDownload:(long long)arg1 logIntValue:(long long)arg2;
- (void)logDownload:(long long)arg1;
- (void)logRunningWithExpandDimension1:(long long)arg1 expandDimension1:(id)arg2;
- (void)logRunningWithUri:(long long)arg1 uri:(id)arg2;
- (void)logRunning:(long long)arg1 logStringValue:(id)arg2 extInfo:(id)arg3;
- (void)logRunning:(long long)arg1 logIntValue:(long long)arg2 extInfo:(id)arg3;
- (void)logRunning:(long long)arg1 extInfo:(id)arg2;
- (void)logRunning:(long long)arg1 logStringValue:(id)arg2 logIntValue:(long long)arg3;
- (void)logRunning:(long long)arg1 logStringValue:(id)arg2;
- (void)logRunning:(long long)arg1 logIntValue:(long long)arg2;
- (void)logRunning:(long long)arg1;
- (void)logStartWithExpandDimension1:(long long)arg1 expandDimension1:(id)arg2;
- (void)logStartWithUri:(long long)arg1 uri:(id)arg2;
- (void)logStart:(long long)arg1 logStringValue:(id)arg2 extInfo:(id)arg3;
- (void)logStart:(long long)arg1 logIntValue:(long long)arg2 extInfo:(id)arg3;
- (void)logStart:(long long)arg1 extInfo:(id)arg2;
- (void)logStart:(long long)arg1 logStringValue:(id)arg2 logIntValue:(long long)arg3;
- (void)logStart:(long long)arg1 logStringValue:(id)arg2;
- (void)logStart:(long long)arg1 logIntValue:(long long)arg2;
- (void)logStart:(long long)arg1;
- (void)report:(id)arg1;
- (id)initWithCpp:(const void *)arg1;

@end

