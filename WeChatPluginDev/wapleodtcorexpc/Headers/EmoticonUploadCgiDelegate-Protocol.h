//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmojiInfoObj, EmoticonUploadCgi;

@protocol EmoticonUploadCgiDelegate
- (void)onEmoticonUploadMd5Failed:(EmoticonUploadCgi *)arg1 reason:(unsigned long long)arg2;
- (void)onEmoticonUploadMd5Ok:(EmoticonUploadCgi *)arg1 emojiInfo:(EmojiInfoObj *)arg2;
@end

