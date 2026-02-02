//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCTDatabase, WCTTable;

@interface WAAppTaskDB : NSObject
{
    NSString *_appID;
    WCTDatabase *_db;
    WCTTable *_tableLocalStorageMainInfo;
    WCTTable *_tableLocalStorageDataInfo_1;
    WCTTable *_tableLocalStorageLengthInfo;
}

- (void).cxx_destruct;
@property(retain) WCTTable *tableLocalStorageLengthInfo; // @synthesize tableLocalStorageLengthInfo=_tableLocalStorageLengthInfo;
@property(retain) WCTTable *tableLocalStorageDataInfo_1; // @synthesize tableLocalStorageDataInfo_1=_tableLocalStorageDataInfo_1;
@property(retain) WCTTable *tableLocalStorageMainInfo; // @synthesize tableLocalStorageMainInfo=_tableLocalStorageMainInfo;
@property(retain) WCTDatabase *db; // @synthesize db=_db;
@property(retain) NSString *appID; // @synthesize appID=_appID;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)updateTable;
- (void)openTable;
- (void)openDB;
- (void)clearLocalStorage:(int)arg1;
- (_Bool)removeLocalStorageDataWithKey:(id)arg1 storageId:(int)arg2;
- (_Bool)batchSetLocalStorageDataList:(id)arg1 dataTypeList:(id)arg2 withKeyList:(id)arg3 storageId:(int)arg4 lastModifyTime:(unsigned int)arg5 handle:(id)arg6;
- (_Bool)setLocalStorageData:(id)arg1 dataType:(id)arg2 withKey:(id)arg3 storageId:(int)arg4 lastModifyTime:(unsigned int)arg5;
- (id)getLocalStorageAllKeys:(int)arg1;
- (_Bool)setLocalStorageKeyAndDataLengthWithStorageId:(int)arg1 length:(unsigned long long)arg2 lastModifyTime:(unsigned int)arg3;
- (unsigned int)getLocalStorageKeyAndDataLengthWithStorageId:(int)arg1;
- (unsigned long long)getLocalStorageKeyAndDataLengthWithKeyList:(id)arg1 storageId:(int)arg2;
- (unsigned int)getLocalStorageKeyAndDataLengthWithKey:(id)arg1 storageId:(int)arg2;
- (void)batchGetLocalStorageDataList:(id *)arg1 dataTypeList:(id *)arg2 withKeyList:(id)arg3 storageId:(int)arg4;
- (void)getLocalStorageData:(id *)arg1 dataType:(id *)arg2 withKey:(id)arg3 storageId:(int)arg4;
- (_Bool)setLocalStorageMainStorageLength:(unsigned long long)arg1 lastModifyTime:(unsigned int)arg2;
- (unsigned long long)getLocalStorageMainStorageLength;
- (void)close;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (void)open;
- (void)dealloc;
- (id)initWithAppID:(id)arg1;

@end

