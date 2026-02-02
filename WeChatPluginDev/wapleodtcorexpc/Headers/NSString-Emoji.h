//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSString.h>

@interface NSString (Emoji)
+ (unsigned long long)glyphIndexForUnicodeString:(id)arg1;
+ (id)convertSimpleUnicodeStr:(id)arg1;
+ (_Bool)isEmoji:(id)arg1;
- (_Bool)isContainLastComposedEmoji;
- (_Bool)isGlyphSupported;
- (id)getEmojiImage:(struct CGSize)arg1;
- (id)getComposedEmojiStrs;
- (_Bool)isContainComposedEmojiWithLooseCheck;
- (unsigned long long)emojiCharCount;
- (id)emojiUnifiedString;
@end

