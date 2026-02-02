//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber;

@interface FLMusicIntType : NSObject
{
    NSNumber *_value;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithValue:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
- (id)toList;

@end

