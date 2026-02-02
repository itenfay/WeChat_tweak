//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol IMBFileSystem;

@protocol IMagicBrushFileSystem <NSObject>

@optional
- (void)addCustomPkgFS:(NSString *)arg1 customName:(NSString *)arg2 prefix:(NSString *)arg3;
- (void)addPkgFS:(NSString *)arg1 pkgPath:(NSString *)arg2 prefix:(NSString *)arg3 assetsFS:(id <IMBFileSystem>)arg4 externalFS:(NSArray *)arg5;
@end

