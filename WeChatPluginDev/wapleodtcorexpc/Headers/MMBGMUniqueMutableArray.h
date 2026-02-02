//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface MMBGMUniqueMutableArray : NSObject
{
    NSMutableArray *_array;
    NSMutableSet *_set;
}

+ (id)uniqueIdOfMusicData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *set; // @synthesize set=_set;
@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
- (void)removeAllObjects;
- (void)safeAddObjectsFromRecommendMusicInfos:(id)arg1;
- (void)safeAddObjectsFromArray:(id)arg1;
- (long long)indexOfObject:(id)arg1;
- (void)safeInsertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)safeRemoveObjectAtIndex:(unsigned long long)arg1;
- (void)safeAddObject:(id)arg1;
- (id)safeObjectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;

@end

