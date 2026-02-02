//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IWCLogStat <NSObject>
+ (void)clickStreamViewDidDisappear:(id)arg1;
+ (void)clickStreamViewDidAppear:(id)arg1;
+ (void)logFeatureExt:(unsigned int)arg1 logExt:(NSString *)arg2 isReportNow:(_Bool)arg3 isKeyLog:(_Bool)arg4;
+ (void)logFeature:(unsigned int)arg1 isReportNow:(_Bool)arg2 isKeyLog:(_Bool)arg3;
@end

