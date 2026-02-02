//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface MJTimelineMutationInfo : NSObject
{
    NSSet *_insertedIDs;
    NSSet *_deletedIDs;
    NSSet *_updatedIDs;
    NSArray *_inserts;
    NSArray *_deletes;
    NSArray *_updates;
    unsigned long long _mutationOptions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long mutationOptions; // @synthesize mutationOptions=_mutationOptions;
@property(readonly, nonatomic) NSArray *updates; // @synthesize updates=_updates;
@property(readonly, nonatomic) NSArray *deletes; // @synthesize deletes=_deletes;
@property(readonly, nonatomic) NSArray *inserts; // @synthesize inserts=_inserts;
- (id)description;
- (_Bool)affectSegmentWithID:(id)arg1;
- (unsigned long long)changeCount;
@property(readonly, nonatomic) _Bool hasChanges;
- (id)initWithInserts:(id)arg1 deletes:(id)arg2 updates:(id)arg3 options:(unsigned long long)arg4;

@end

