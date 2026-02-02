//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WebPageLangIdentifierUtil : NSObject
{
}

+ (id)sortAndCutArray:(id)arg1 cutLength:(unsigned long long)arg2;
+ (id)squeezeArray:(id)arg1 cellLength:(unsigned long long)arg2;
+ (id)clearArray:(id)arg1;
+ (_Bool)isStringLegal:(id)arg1;
+ (float)identifyLanguageRatioBySampleArray:(id)arg1 ignoreTraditionCN:(_Bool)arg2 wholeLength:(_Bool *)arg3;

@end

