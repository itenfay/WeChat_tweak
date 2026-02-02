//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray;

@interface MMTListSectionMap : NSObject
{
    NSMutableArray *_mObjects;
    NSMapTable *_objectToSectionControllerMap;
    NSMapTable *_sectionControllerToSectionMap;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMapTable *sectionControllerToSectionMap; // @synthesize sectionControllerToSectionMap=_sectionControllerToSectionMap;
@property(readonly, nonatomic) NSMapTable *objectToSectionControllerMap; // @synthesize objectToSectionControllerMap=_objectToSectionControllerMap;
@property(retain, nonatomic) NSMutableArray *mObjects; // @synthesize mObjects=_mObjects;
- (void)enumerateUsingBlock:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)updateWithObjects:(id)arg1 sectionControllers:(id)arg2;
- (void)updateObject:(id)arg1;
- (long long)sectionForObject:(id)arg1;
- (id)sectionControllerForObject:(id)arg1;
- (id)objectForSectionController:(id)arg1;
- (id)objectForSection:(long long)arg1;
- (long long)sectionForSectionController:(id)arg1;
- (id)sectionControllerForSection:(long long)arg1;
@property(readonly, nonatomic) NSArray *objects;
- (id)init;

@end

