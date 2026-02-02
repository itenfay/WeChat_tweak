//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CommonKvReportObjc : NSObject
{
}

+ (void)reportCustomCgiEvent:(id)arg1 bizId:(unsigned long long)arg2 isBatchReport:(_Bool)arg3 keyArr:(id)arg4 valueArr:(id)arg5;
+ (void)reportCustomEvent:(id)arg1 routeRule:(unsigned long long)arg2 isRtReport:(_Bool)arg3 keyArr:(id)arg4 valueArr:(id)arg5;
+ (void)kvReport:(unsigned int)arg1 value:(id)arg2;

@end

