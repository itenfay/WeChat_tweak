//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonRemoteRecommendRecord, MemoryMappedKV;

@interface EmoticonRemoteRecommendTable : NSObject
{
    MemoryMappedKV *_recordStorage;
    MemoryMappedKV *_recentUseStorage;
    EmoticonRemoteRecommendRecord *_headRecord;
}

+ (void)clearAll;
- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonRemoteRecommendRecord *headRecord; // @synthesize headRecord=_headRecord;
@property(retain, nonatomic) MemoryMappedKV *recentUseStorage; // @synthesize recentUseStorage=_recentUseStorage;
@property(retain, nonatomic) MemoryMappedKV *recordStorage; // @synthesize recordStorage=_recordStorage;
- (void)clearNoReferencedRecentUse:(id)arg1;
- (unsigned long long)recentUseFileSize;
- (id)getAllRecentUseQueries;
- (id)getRecentUseRecordForQuery:(id)arg1;
- (void)updateRecentUseMd5:(id)arg1 lastUsedTime:(unsigned int)arg2 refEmoticon:(id)arg3;
- (unsigned long long)recordFileSize;
- (id)getAllRecordKeys;
- (void)clearNoReferencedRecords:(id)arg1;
- (_Bool)updateRecommend:(id)arg1 forQuery:(id)arg2;
- (id)requestRecommendForQuery:(id)arg1;

@end

