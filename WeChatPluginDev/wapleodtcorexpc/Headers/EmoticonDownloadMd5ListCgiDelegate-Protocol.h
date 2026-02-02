//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString;

@protocol EmoticonDownloadMd5ListCgiDelegate <NSObject>
- (void)onEmoticonDownloadMd5ListFailed;
- (void)onEmoticonDownloadMd5ListOk:(NSArray *)arg1 reqBuff:(NSData *)arg2 versionKey:(NSString *)arg3;
@end

