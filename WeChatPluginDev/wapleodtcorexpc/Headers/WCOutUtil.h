//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCOutUtil : NSObject
{
}

+ (void)showAlert:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4;
+ (id)wordingForPhoneLable:(id)arg1;
+ (id)genLastCallContactsCallTime:(unsigned int)arg1;
+ (id)getWCOutPackageVersionPathForTid:(id)arg1;
+ (id)getWCOutPackageFilePathForTid:(id)arg1;
+ (id)getWCOutPackageDirPathForTid:(id)arg1;
+ (id)getWCoutCouponResponseCachePath;
+ (id)getWCOutPackagePath;
+ (id)getWCOutDBPath;
+ (id)getUserCommonDataDir;
+ (id)getUserDataDir;

@end

