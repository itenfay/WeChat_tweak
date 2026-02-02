//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface TextStateExperimentTable : NSObject
{
    unsigned long long _key;
    NSMutableArray *_entryList;
    NSMutableDictionary *_keyToEntryDict;
}

+ (void)initialize;
+ (void)PBArrayAdd_entryList;
+ (void)PBArrayAdd_key;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *keyToEntryDict; // @synthesize keyToEntryDict=_keyToEntryDict;
@property(retain, nonatomic) NSMutableArray *entryList; // @synthesize entryList=_entryList;
@property(nonatomic) unsigned long long key; // @synthesize key=_key;
- (id)entryForKey:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

