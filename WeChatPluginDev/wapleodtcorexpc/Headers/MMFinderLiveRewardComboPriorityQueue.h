//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMFinderLiveRewardComboPriorityQueue : NSObject
{
    NSMutableArray *_comboObjectQueue;
    CDUnknownBlockType _comparator;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property(retain, nonatomic) NSMutableArray *comboObjectQueue; // @synthesize comboObjectQueue=_comboObjectQueue;
- (void)insert:(id)arg1;
- (id)toArray;
- (id)poll;
- (id)peek;
- (void)remove:(id)arg1;
- (void)add:(id)arg1;
- (void)clear;
- (_Bool)contains:(id)arg1;
- (unsigned long long)size;
- (_Bool)isEmpty;
- (id)initWithCapacity:(int)arg1;
- (id)init;

@end

