//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAEJFontDescriptor : NSObject
{
    NSString *source;
    NSString *name;
    float size;
    float weight;
    _Bool bold;
    _Bool italic;
    unsigned long long sumhash;
}

+ (id)descriptorWithParmas:(id)arg1;
@property(readonly, nonatomic) _Bool italic; // @synthesize italic;
@property(readonly, nonatomic) _Bool bold; // @synthesize bold;
@property(readonly, nonatomic) float size; // @synthesize size;
@property(readonly, nonatomic) float weight; // @synthesize weight;
@property(readonly, nonatomic) NSString *name; // @synthesize name;
@property(readonly, nonatomic) NSString *source; // @synthesize source;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)sumHash;
- (void)weightParse:(const void *)arg1;
- (void)fontParse:(void *)arg1;
- (void)replaceAll:(void *)arg1 from:(const void *)arg2 to:(const void *)arg3;

@end

