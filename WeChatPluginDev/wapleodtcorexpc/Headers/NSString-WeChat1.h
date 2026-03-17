//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSString.h>

@interface NSString (WeChat1)
- (id)safeSubstringToCharacterIndex:(long long)arg1;
- (id)substringToCharacterIndex:(long long)arg1;
- (struct _NSRange)utf16UnitsRangeForCharacterContainingUtf16UnitIndex:(long long)arg1;
- (long long)characterIndexWithUtf16UnitIndex:(long long)arg1;
- (struct _NSRange)utf16UnitsRangeForCharacterAtIndex:(long long)arg1;
- (id)trimToFullWidthWeightedLength:(unsigned long long)arg1;
- (unsigned long long)fullWidthWeightedLength;
- (_Bool)containsFullWidthCharacters;
- (_Bool)containsCjkScript;
- (_Bool)isAllIdeographicOrRadical;
- (_Bool)isAllEmoji;
- (_Bool)containsEmoji;
- (long long)numberOfCharacters;
@end

