//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMKeychain : NSObject
{
}

+ (id)accessGroup;
+ (id)bundleSeedID;
+ (_Bool)deleteWithService:(id)arg1 accessGroup:(id)arg2 migratable:(_Bool)arg3 error:(int *)arg4;
+ (_Bool)deleteWithService:(id)arg1 accessGroup:(id)arg2 migratable:(_Bool)arg3;
+ (id)load:(id)arg1 accessGroup:(id)arg2 migratable:(_Bool)arg3 error:(int *)arg4;
+ (id)load:(id)arg1 accessGroup:(id)arg2 migratable:(_Bool)arg3;
+ (_Bool)save:(id)arg1 data:(id)arg2 accessGroup:(id)arg3 migratable:(_Bool)arg4 error:(int *)arg5;
+ (_Bool)save:(id)arg1 data:(id)arg2 accessGroup:(id)arg3 migratable:(_Bool)arg4;
+ (id)getKeychainQuery:(id)arg1 accessGroup:(id)arg2 migratable:(_Bool)arg3;

@end

