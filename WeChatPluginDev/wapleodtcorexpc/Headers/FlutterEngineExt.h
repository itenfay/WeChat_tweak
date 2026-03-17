//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FlutterEngineExt : NSObject
{
}

+ (id)createFlutterUpdateDartProject;
+ (_Bool)isEnableRasterProfiling;
+ (_Bool)isEnableMMProfiler;
+ (_Bool)isEnableWideGamut;
+ (_Bool)isEnableImpeller;
+ (id)getDartVmArgs;

@end

