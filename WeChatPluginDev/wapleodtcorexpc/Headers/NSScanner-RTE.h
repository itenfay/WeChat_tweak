//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSScanner.h>

@interface NSScanner (RTE)
+ (id)complementaryCharacterSetFromWhitespaceAndNewline;
+ (id)whitespaceCommasAndClosingParenthesisCharacterSet;
+ (id)complementaryCharacterSetFromNumber;
- (_Bool)scanCSSAttribute:(id *)arg1 value:(id *)arg2;
- (_Bool)scanCGFloat:(double *)arg1;
- (_Bool)scanBool:(_Bool *)arg1;
- (_Bool)scanPoint:(struct CGPoint *)arg1;
- (void)scanThroughToHyphen;
- (unsigned short)currentCharacter;
- (unsigned short)initialCharacter;
- (void)scanThroughWhitespaceCommasAndClosingParenthesis;
- (_Bool)scanFloatAndAdvance:(float *)arg1;
@end

