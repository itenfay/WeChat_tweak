//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol HeadImgDownloaderDelegate <NSObject>
- (void)onHDHeadImgDownloadFinish:(NSString *)arg1;
- (void)onHeadImgDownloadFinish:(NSString *)arg1 Status:(NSString *)arg2 Image:(NSData *)arg3 Category:(unsigned char)arg4;
@end

