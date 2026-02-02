//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMLivePrioritizedQueue
{
    CDUnknownBlockType _comparator;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
- (void)enqueueEx:(id)arg1 tieBreakingBehavior:(unsigned long long)arg2;
- (unsigned long long)defaultEvictionBehavior;
- (id)initWithPrioritizationPolicy:(CDUnknownBlockType)arg1 maxCount:(unsigned long long)arg2;

@end

