//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSString.h>

@interface NSString (NSString_MMExtend)
+ (id)getShowStringForAlertBySize:(unsigned long long)arg1;
+ (id)getShowStringBySize:(unsigned long long)arg1;
+ (id)getShowDetailStringBySize:(unsigned long long)arg1;
+ (id)getShowMediumDetailStringBySize:(unsigned long long)arg1;
+ (id)generatePrivacyEmail:(id)arg1;
+ (id)generatePrivacyStringFromArray:(id)arg1;
+ (id)generatePrivacyString:(id)arg1;
+ (id)filterInvalidUTF8CharFrom:(id)arg1;
+ (id)safeStringWithUTF8String:(const char *)arg1;
+ (_Bool)isString:(id)arg1 equalToString:(id)arg2 nilEqualsToEmpty:(_Bool)arg3;
+ (_Bool)isString:(id)arg1 equalToString:(id)arg2;
+ (id)stringWithUInt64:(unsigned long long)arg1;
- (id)stringByTrimingContinueCharactersInSet:(id)arg1;
- (id)stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)safeSubstringWithRange:(struct _NSRange)arg1;
- (id)safeSubstringToIndex:(long long)arg1;
- (id)safeSubstringFromIndex:(long long)arg1;
- (_Bool)isLastCharacterAlphaNumeric;
- (id)replacingWithPattern:(id)arg1 withTemplate:(id)arg2 error:(id *)arg3;
- (_Bool)containsSubstring:(id)arg1 option:(unsigned long long)arg2;
- (_Bool)containsSubstring:(id)arg1;
- (long long)compareWithUInt64:(id)arg1;
- (id)stringByEscapingAllLineBreak;
- (id)stringByTrimmingRight;
- (id)stringByTrimmingLeft;
- (id)stringByTrimming;
- (id)stringByTrimmingTrailingCharactersInSet:(id)arg1;
- (id)stringByTrimmingLeadingCharactersInSet:(id)arg1;
- (_Bool)hasCaseInsensitivePrefix:(id)arg1 subString:(id *)arg2;
- (_Bool)isCaseInsensitiveEqualToString:(id)arg1;
- (unsigned long long)uint64Value;
- (unsigned long long)unsignLongLongValue;
@end

