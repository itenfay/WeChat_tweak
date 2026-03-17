//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WXVoIPSystemUtil : NSObject
{
}

+ (_Bool)isLowPerformanceDevice;
+ (id)deviceModelVersion;
+ (float)getAppMemoryUsage;
+ (_Bool)isVersionNoLessThan:(id)arg1;
+ (_Bool)isVersionNoGreaterThan:(id)arg1;
+ (_Bool)isVersionLessThan:(id)arg1;
+ (_Bool)isVersionGreaterThan:(id)arg1;
+ (id)getSystemVersion;

@end

