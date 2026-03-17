//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;

@protocol EmoticonDownloadProxyDelegate <NSObject>

@optional
- (void)onEmoticonDownloadingMd5:(NSString *)arg1 withUserInfo:(NSObject *)arg2 partLen:(unsigned long long)arg3 totalLen:(unsigned long long)arg4;
- (void)onEmoticonDownloadMd5Failed:(NSString *)arg1 withUserInfo:(NSObject *)arg2;
- (void)onEmoticonDownloadMd5Ok:(NSString *)arg1 AndFilePath:(NSString *)arg2 withUserInfo:(NSObject *)arg3;
@end

