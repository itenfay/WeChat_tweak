//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SearchKeywordItem : NSObject
{
    NSString *_keyword;
    NSString *_regexword;
    _Bool _regextMode;
    _Bool _isEnglishWord;
    _Bool _regexMode;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isEnglishWord; // @synthesize isEnglishWord=_isEnglishWord;
@property(nonatomic) _Bool regexMode; // @synthesize regexMode=_regexMode;
@property(retain, nonatomic) NSString *regexword; // @synthesize regexword=_regexword;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (id)init;

@end

