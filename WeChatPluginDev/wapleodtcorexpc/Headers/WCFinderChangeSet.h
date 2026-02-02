//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface WCFinderChangeSet : NSObject
{
    NSIndexSet *_removes;
    NSIndexSet *_inserts;
    NSIndexSet *_updates;
}

+ (id)changeSetWithUpdate:(id)arg1;
+ (id)changeSetWithInsert:(id)arg1;
+ (id)changeSetWithRemove:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexSet *updates; // @synthesize updates=_updates;
@property(retain, nonatomic) NSIndexSet *inserts; // @synthesize inserts=_inserts;
@property(retain, nonatomic) NSIndexSet *removes; // @synthesize removes=_removes;
- (id)descriptForIndexSet:(id)arg1;
- (id)description;
- (id)convertUpdateIndexPath:(long long)arg1;
- (id)convertInsertIndexPath:(long long)arg1;
- (id)convertRemoveIndexPath:(long long)arg1;
- (void)applyRemoves:(CDUnknownBlockType)arg1 inserts:(CDUnknownBlockType)arg2 updates:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool onlyInsert;
@property(readonly, nonatomic) _Bool empty;

@end

