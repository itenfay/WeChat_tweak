//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmojiInfoObj, EmoticonUploadInfoObj, NSString;

@protocol EmoticonUploaderDelegate <NSObject>
- (void)onEmoticonUploadFailWithUploadInfo:(EmoticonUploadInfoObj *)arg1 reason:(unsigned long long)arg2 realMd5:(NSString *)arg3;
- (void)onEmoticonUploadSuccessWithEmoji:(EmojiInfoObj *)arg1 uploadInfo:(EmoticonUploadInfoObj *)arg2;
@end

