//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCHotwordRegExpReplacer : NSObject
{
    NSDictionary *_replacements;
    NSString *_regExpPattern;
    unsigned long long _matchingMaxLength;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long matchingMaxLength; // @synthesize matchingMaxLength=_matchingMaxLength;
@property(copy, nonatomic) NSString *regExpPattern; // @synthesize regExpPattern=_regExpPattern;
@property(copy, nonatomic) NSDictionary *replacements; // @synthesize replacements=_replacements;
- (id)replacedContentForContent:(id)arg1;
- (id)regExpPatternWithReplacements:(id)arg1;
- (_Bool)isValid;
- (_Bool)isEqual:(id)arg1;
- (id)initWithReplacements:(id)arg1 matchingMaxLength:(unsigned long long)arg2;

@end

