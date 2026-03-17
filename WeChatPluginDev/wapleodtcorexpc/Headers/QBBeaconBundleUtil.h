//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QBBeaconBundleUtil : NSObject
{
}

+ (_Bool)deleteItemForUsername:(id)arg1 andServiceName:(id)arg2 error:(id *)arg3;
+ (_Bool)storeUsername:(id)arg1 andPassword:(id)arg2 forServiceName:(id)arg3 updateExisting:(_Bool)arg4 error:(id *)arg5;
+ (id)getPasswordForUsername:(id)arg1 andServiceName:(id)arg2 error:(id *)arg3;
+ (id)getBundleShortVer;
+ (id)getBundleVersion;
+ (id)getBundleId;
+ (id)getQimei;
+ (_Bool)saveQimei:(id)arg1;
+ (id)initWithCoder:(id)arg1 forObject:(id)arg2;
+ (void)encodeWithCoder:(id)arg1 forObject:(id)arg2;

@end

