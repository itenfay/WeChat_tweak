//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFICImageFormat, MemoryMappedKV, NSMutableDictionary, NSMutableIndexSet, NSMutableOrderedSet, NSString;

@interface FICImageTableMetadata : NSObject
{
    unsigned int m_entryCount;
    unsigned int m_maxLRUFactor;
    NSString *m_metadataPath;
    MMFICImageFormat *m_imgFormat;
    NSMutableDictionary *m_entries;
    MemoryMappedKV *m_entriesKV;
    NSMutableOrderedSet *m_MRUEntries;
    NSMutableIndexSet *m_unoccupiedIndexes;
    unsigned int _imgSizeWidth;
    unsigned int _imgSizeHeight;
    unsigned int _imgMaxCnt;
    unsigned int _cpuzSize;
    unsigned int _pageSize;
    unsigned int _version;
    unsigned int _FICVersion;
    NSString *_formatName;
}

+ (void)initialize;
+ (void)PBArrayAdd_FICVersion;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_pageSize;
+ (void)PBArrayAdd_cpuzSize;
+ (void)PBArrayAdd_imgMaxCnt;
+ (void)PBArrayAdd_imgSizeHeight;
+ (void)PBArrayAdd_imgSizeWidth;
+ (void)PBArrayAdd_formatName;
- (void).cxx_destruct;
@property(nonatomic) unsigned int FICVersion; // @synthesize FICVersion=_FICVersion;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) unsigned int cpuzSize; // @synthesize cpuzSize=_cpuzSize;
@property(nonatomic) unsigned int imgMaxCnt; // @synthesize imgMaxCnt=_imgMaxCnt;
@property(nonatomic) unsigned int imgSizeHeight; // @synthesize imgSizeHeight=_imgSizeHeight;
@property(nonatomic) unsigned int imgSizeWidth; // @synthesize imgSizeWidth=_imgSizeWidth;
@property(retain, nonatomic) NSString *formatName; // @synthesize formatName=_formatName;
@property(nonatomic) unsigned int maxLRUFactor; // @synthesize maxLRUFactor=m_maxLRUFactor;
@property(nonatomic) unsigned int entryCount; // @synthesize entryCount=m_entryCount;
@property(readonly, nonatomic) NSMutableDictionary *entries; // @synthesize entries=m_entries;
- (_Bool)isAnyEntityInUsed;
- (void)setEntityInUse:(_Bool)arg1 entityUUID:(id)arg2;
- (void)entryWasAccessedWithEntityUUID:(id)arg1;
- (unsigned long long)nextEntryIndex;
- (void)newEntryWithEntityUUID:(id)arg1 entryIndex:(unsigned long long)arg2;
- (void)deleteEntryForEntityUUID:(id)arg1;
- (unsigned long long)indexOfEntryForEntityUUID:(id)arg1;
- (void)reset;
- (_Bool)saveMetadata;
- (_Bool)loadMetadata;
- (id)initWithMetadataPath:(id)arg1 imgFormat:(id)arg2;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

