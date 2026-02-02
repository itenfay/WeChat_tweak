//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@protocol MagicPkgDownloadExt

@optional
- (void)onPkgUpdateFail:(NSString *)arg1 reason:(unsigned long long)arg2;
- (void)onPkgUpdateSuccess:(NSString *)arg1 pkgVersion:(NSString *)arg2;
@end

