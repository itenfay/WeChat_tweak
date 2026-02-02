//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol IWeAvatarResPackageLogic <NSObject>
- (NSData *)getCodePackageData;
- (void)tryUpdatePackage:(void (^)(NSString *))arg1 failBlock:(void (^)(NSString *, NSString *))arg2;
- (_Bool)checkPackageExist;

@optional
- (NSString *)getCodePackageMD5;
- (NSString *)getCodePackagePath;
@end

