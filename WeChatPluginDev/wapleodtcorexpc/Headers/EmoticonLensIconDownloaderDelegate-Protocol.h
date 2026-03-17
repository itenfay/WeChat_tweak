//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol EmoticonLensIconDownloaderDelegate <NSObject>
- (void)onIconDownloaderFail:(NSString *)arg1;
- (void)onIconDownloaderSuccess:(NSString *)arg1 filePath:(NSString *)arg2;
@end

