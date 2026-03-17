//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TokenizerUtil : NSObject
{
}

+ (id)escapeSymbolsFrom:(id)arg1;
+ (id)genPinyinQuaryFrom:(id)arg1;
+ (id)generateFTS5BinaryTokenizeString:(id)arg1;
+ (id)getKeywordsForString:(id)arg1 skipStemming:(_Bool)arg2;
+ (id)getKeywordsForString:(id)arg1;
+ (id)getUnicodeNormalizationForms:(id)arg1;

@end

