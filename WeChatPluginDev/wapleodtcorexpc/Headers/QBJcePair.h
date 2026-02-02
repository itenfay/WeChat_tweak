//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QBJcePair : NSObject
{
    id _key;
    id _value;
}

+ (id)pairWithValue:(id)arg1 forKey:(id)arg2;
+ (id)pairFromExtStr:(id)arg1;
+ (id)analyzeExtStr:(id)arg1;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) id key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

