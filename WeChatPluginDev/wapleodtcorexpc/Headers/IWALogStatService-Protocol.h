//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSString;

@protocol IWALogStatService <NSObject>
+ (void)clickStreamViewDidDisappear:(MMUIViewController *)arg1;
+ (void)clickStreamViewDidAppear:(MMUIViewController *)arg1;
+ (void)delLocationMgrUse:(unsigned long long)arg1;
+ (void)addLocationMgrUse:(unsigned long long)arg1 isLocation:(_Bool)arg2;
+ (void)logFeatureExt:(unsigned int)arg1 logExt:(NSString *)arg2 isReportNow:(_Bool)arg3 isKeyLog:(_Bool)arg4 ignoreFreqCheck:(_Bool)arg5;
+ (void)logFeatureExt:(unsigned int)arg1 logExt:(NSString *)arg2 isReportNow:(_Bool)arg3 isKeyLog:(_Bool)arg4;
+ (void)logFeature:(unsigned int)arg1 isReportNow:(_Bool)arg2 isKeyLog:(_Bool)arg3;
@end

