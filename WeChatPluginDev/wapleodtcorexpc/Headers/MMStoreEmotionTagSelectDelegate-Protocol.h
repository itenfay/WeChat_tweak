//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmojiTag;

@protocol MMStoreEmotionTagSelectDelegate <NSObject>

@optional
- (void)onCancelTagSelect;
- (void)onSelectShowAllTag;
- (void)onSelectTag:(EmojiTag *)arg1;
@end

