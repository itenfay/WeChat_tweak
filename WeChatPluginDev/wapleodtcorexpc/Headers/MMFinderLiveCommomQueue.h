//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMFinderLiveCommomQueue : NSObject
{
    unsigned long long _size;
    NSMutableArray *_array;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
- (void)removeObjectsInArray:(id)arg1;
- (id)pop;
- (void)push:(id)arg1;
- (id)back;
- (id)front;
- (id)init;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;

@end

