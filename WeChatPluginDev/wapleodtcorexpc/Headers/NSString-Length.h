//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSString.h>

@interface NSString (Length)
- (id)removeLastComposedEmoji:(id)arg1;
- (id)getCharacterNumberWithIndex:(unsigned long long)arg1;
- (id)prefixForLength:(unsigned long long)arg1 WithEmoOneCharPolicy:(_Bool)arg2;
- (unsigned long long)getEmojiFixedLengthOffset;
- (unsigned long long)getEmoticonFixedLengthOffset;
- (id)filterNewLineCharacter;
- (id)prefixWithLength:(unsigned long long)arg1;
- (unsigned long long)charLengthWithEmojiFullLength;
- (unsigned long long)getCharacterWithEmoji;
- (unsigned long long)getIndexWithMaxCharCount:(unsigned long long)arg1 withEmojiFullLength:(_Bool)arg2;
- (unsigned long long)getIndexWithMaxCharCount:(unsigned long long)arg1;
- (unsigned long long)charLengthWithEmoOneCharPolicy:(_Bool)arg1 andIsFullWidth:(_Bool)arg2;
- (unsigned long long)charLength;
@end

