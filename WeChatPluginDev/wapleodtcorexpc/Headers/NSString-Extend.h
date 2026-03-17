//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSString.h>

@interface NSString (Extend)
+ (id)stringWithCharacter:(unsigned short)arg1;
- (id)getNumberString;
- (id)removeSpaceAndNewline;
- (id)urlStringByAppendQueryString:(id)arg1;
- (id)urlStringByAppendQueryArray:(id)arg1;
- (id)urlStringByAppendQueryDictionary:(id)arg1;
- (id)urlQueryParamDict;
- (_Bool)hasChinese;
- (_Bool)isChinese;
- (_Bool)isNumber;
- (id)lastCharacter;
- (id)firstCharacter;
- (id)characterStringAtIndex:(unsigned long long)arg1;
- (id)stringByTrimmingWhitespace;
@end

