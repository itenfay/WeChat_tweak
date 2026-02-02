//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FICEntryMetadata : NSObject
{
    unsigned int _entityIndex;
    unsigned int _LRUFactor;
    int _entityUsedCount;
    NSString *_entityUUID;
}

+ (void)initialize;
+ (void)PBArrayAdd_LRUFactor;
+ (void)PBArrayAdd_entityIndex;
- (void).cxx_destruct;
@property(nonatomic) int entityUsedCount; // @synthesize entityUsedCount=_entityUsedCount;
@property(nonatomic) unsigned int LRUFactor; // @synthesize LRUFactor=_LRUFactor;
@property(nonatomic) unsigned int entityIndex; // @synthesize entityIndex=_entityIndex;
@property(retain, nonatomic) NSString *entityUUID; // @synthesize entityUUID=_entityUUID;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

