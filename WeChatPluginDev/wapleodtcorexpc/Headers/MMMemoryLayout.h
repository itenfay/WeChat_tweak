//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMMemoryLayout : NSObject
{
    long long _offset;
    long long _type;
    MMMemoryLayout *_node;
    long long _base;
}

- (void).cxx_destruct;
@property(nonatomic) long long base; // @synthesize base=_base;
@property(retain, nonatomic) MMMemoryLayout *node; // @synthesize node=_node;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
- (long long)value;
- (unsigned long long)readST;
- (unsigned long long *)ptr;
- (void)resetBase:(long long)arg1;
- (id)initWithDictionary:(id)arg1 base:(long long)arg2;

@end

