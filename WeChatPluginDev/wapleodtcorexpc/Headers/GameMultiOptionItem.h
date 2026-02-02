//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface GameMultiOptionItem : NSObject
{
    _Bool _hasClearOption;
    NSString *_debugKey;
    NSString *_title;
    NSArray *_optionAndDescArray;
    CDUnknownBlockType _didSetOptionBlock;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasClearOption; // @synthesize hasClearOption=_hasClearOption;
@property(copy, nonatomic) CDUnknownBlockType didSetOptionBlock; // @synthesize didSetOptionBlock=_didSetOptionBlock;
@property(retain, nonatomic) NSArray *optionAndDescArray; // @synthesize optionAndDescArray=_optionAndDescArray;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *debugKey; // @synthesize debugKey=_debugKey;
- (id)descForOptionValue:(id)arg1;
- (void)setDebugValueAtIndex:(long long)arg1;
- (id)currentValue;
- (id)initWithDebugKey:(id)arg1 title:(id)arg2 optionAndDescArray:(id)arg3 hasClearOption:(_Bool)arg4;
- (id)initWithDebugKey:(id)arg1 title:(id)arg2 optionAndDescArray:(id)arg3;

@end

