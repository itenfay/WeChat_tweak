//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableCharacterSet;

@interface RegexMatcher : NSObject
{
    _Bool _overLimited;
    NSMutableArray *_regexNotGreedArray;
    NSMutableArray *_regexGreedArray;
    NSMutableCharacterSet *_identifierSet;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool overLimited; // @synthesize overLimited=_overLimited;
@property(copy, nonatomic) NSMutableCharacterSet *identifierSet; // @synthesize identifierSet=_identifierSet;
@property(copy, nonatomic) NSMutableArray *regexGreedArray; // @synthesize regexGreedArray=_regexGreedArray;
@property(copy, nonatomic) NSMutableArray *regexNotGreedArray; // @synthesize regexNotGreedArray=_regexNotGreedArray;
- (_Bool)isLegalWord:(id)arg1;
- (id)extractWord:(id)arg1 level:(int)arg2;
- (id)extractWord:(id)arg1;
- (id)init;

@end

