//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, TextStatePublishIconList;

@interface TextStateIconStorage : NSObject
{
    NSString *_configId;
    unsigned long long _key;
    unsigned long long _showIconMaxCount;
    NSMutableArray *_groups;
    NSMutableArray *_icons;
    NSRecursiveLock *_accessLock;
    NSMutableDictionary *_idToIconDict;
}

+ (void)initialize;
+ (void)PBArrayAdd_icons;
+ (void)PBArrayAdd_groups;
+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_configId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *idToIconDict; // @synthesize idToIconDict=_idToIconDict;
@property(retain, nonatomic) NSRecursiveLock *accessLock; // @synthesize accessLock=_accessLock;
@property(retain, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
@property(nonatomic) unsigned long long showIconMaxCount; // @synthesize showIconMaxCount=_showIconMaxCount;
@property(nonatomic) unsigned long long key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *configId; // @synthesize configId=_configId;
- (void)clearCachedDescription;
- (id)iconForId:(id)arg1;
@property(readonly, nonatomic) TextStatePublishIconList *publishIconList;
- (void)immediateLoadData;
- (id)initWithConfig:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

