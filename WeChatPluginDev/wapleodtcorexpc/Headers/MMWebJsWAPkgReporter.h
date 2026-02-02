//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMWebJsWAPkgReporter : NSObject
{
}

+ (void)reportCommenError:(id)arg1 ret:(unsigned int)arg2;
+ (void)reportDownloadCallback:(id)arg1 numberVersion:(long long)arg2 strVersion:(id)arg3 ret:(unsigned int)arg4;
+ (void)reportTrigerDownloadPkg:(id)arg1;
+ (void)reportReadPkg:(id)arg1 numberVersion:(long long)arg2 pkgType:(unsigned int)arg3 strVersion:(id)arg4;
+ (void)reportReadPkg:(id)arg1 version:(long long)arg2 pkgType:(unsigned int)arg3;

@end

