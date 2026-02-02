//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface JSC2Hook : NSObject
{
}

+ (id)checkGlobalVariables;
+ (id)checkCategories;
+ (id)checkSubclasses;
+ (_Bool)start;
+ (_Bool)isNormal;
+ (_Bool)isOSTraceAvaible;
+ (_Bool)checkICUData;
+ (void)setICUDataPath:(id)arg1;
+ (id)getICUDataPath:(unsigned int *)arg1;
+ (_Bool)removeICUIfNeeded;

@end

