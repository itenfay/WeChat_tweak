//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSString.h>

@interface NSString (Collection)
+ (_Bool)isEmptyString:(id)arg1;
+ (id)repeat:(id)arg1 times:(int)arg2;
- (id)fromBase64;
- (id)toBase64;
- (id)md5;
- (id)urlDecode;
- (id)urlEncode;
- (id)rpad:(int)arg1 string:(id)arg2;
- (id)lpad:(int)arg1 string:(id)arg2;
- (_Bool)matches:(id)arg1;
- (_Bool)contains:(id)arg1;
- (_Bool)startsWith:(id)arg1;
- (_Bool)endsWith:(id)arg1;
- (id)withoutDiacritic;
- (id)lcFirst;
- (id)ucFirst;
- (id)newSnakeCase;
- (id)snakeCase;
- (id)pascalCase;
- (id)camelCase;
- (id)trimRight;
- (id)trimLeft;
- (id)split:(int)arg1;
- (id)split;
- (id)replaceRegexp:(id)arg1 with:(id)arg2;
- (id)replace:(id)arg1 with:(id)arg2;
- (id)trimWithNewLine;
- (id)trim;
- (id)substr:(int)arg1 length:(int)arg2;
- (id)prepend:(id)arg1;
- (id)append:(id)arg1;
- (id)toNumber;
- (id)initials;
- (id)explode:(id)arg1;
@end

