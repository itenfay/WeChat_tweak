//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmojiUploadCgi, NSString;

@protocol EmojiUploadCgiDelegate <NSObject>
- (void)onEmojiUploadBufferCgiFinished:(EmojiUploadCgi *)arg1 isSuccess:(_Bool)arg2 isEnd:(_Bool)arg3 activityId:(NSString *)arg4;
@end

