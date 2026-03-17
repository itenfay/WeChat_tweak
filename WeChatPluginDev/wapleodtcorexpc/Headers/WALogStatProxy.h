//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WALogStatProxy : NSObject
{
}

+ (void)logFeatureExt:(unsigned int)arg1 logExt:(id)arg2 isReportNow:(_Bool)arg3 isKeyLog:(_Bool)arg4 ignoreFreqCheck:(_Bool)arg5;
+ (void)clickStreamViewDidDisappear:(id)arg1;
+ (void)clickStreamViewDidAppear:(id)arg1;
+ (void)delLocationMgrUse:(unsigned long long)arg1;
+ (void)addLocationMgrUse:(unsigned long long)arg1 isLocation:(_Bool)arg2;
+ (void)logFeatureExt:(unsigned int)arg1 logExt:(id)arg2 isReportNow:(_Bool)arg3 isKeyLog:(_Bool)arg4;
+ (void)logFeature:(unsigned int)arg1 isReportNow:(_Bool)arg2 isKeyLog:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

