//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSString.h>

@interface NSString (Live)
- (id)mutableStringByEscapingWeChatEmoticonsWithAttachmentCharacterAndExtractNotations:(id *)arg1;
- (id)safeSubstringCountingWeChatEmoticonsAsOneToCharacterIndex:(unsigned long long)arg1;
- (long long)numberOfCharactersCountingWeChatEmoticonsAsOne;
- (id)stringByEscapingWeChatEmoticonsWithAttachmentCharacterAndExtractNotations:(id *)arg1;
@end

