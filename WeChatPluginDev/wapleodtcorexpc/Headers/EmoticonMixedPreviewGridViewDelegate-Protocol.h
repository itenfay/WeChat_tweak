//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmojiInfo;

@protocol EmoticonMixedPreviewGridViewDelegate <NSObject>
- (EmojiInfo *)currentBrowseEmoticon;
- (long long)emoticonScene;
- (void)onTapPreviewMore;
@end

