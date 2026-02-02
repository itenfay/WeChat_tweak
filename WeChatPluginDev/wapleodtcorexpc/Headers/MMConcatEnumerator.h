//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSEnumerator.h>

@class NSArray;

@interface MMConcatEnumerator : NSEnumerator
{
    NSArray *_enumerators;
    long long _currIndex;
}

+ (id)concatEnumrators:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long currIndex; // @synthesize currIndex=_currIndex;
@property(retain, nonatomic) NSArray *enumerators; // @synthesize enumerators=_enumerators;
- (id)nextObject;

@end

