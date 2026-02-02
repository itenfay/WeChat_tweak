//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCHardlinkFileInfo : NSObject
{
    unsigned long long _inodeNum;
    NSString *_filePath;
    NSString *_fileMD5;
    unsigned long long _fileSize;
    unsigned long long _scanType;
}

+ (id)fullPath:(id)arg1;
+ (id)shortPath:(id)arg1;
+ (id)tableName;
+ (void)__wcdb_index_5:(void *)arg1;
+ (id)swift_scanType;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)scanType;
+ (id)swift_fileSize;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)fileSize;
+ (id)swift_fileMD5;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)fileMD5;
+ (id)swift_filePath;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)filePath;
+ (id)swift_inodeNum;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)inodeNum;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_scanType;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_fileMD5;
+ (void)PBArrayAdd_filePath;
+ (void)PBArrayAdd_inodeNum;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long scanType; // @synthesize scanType=_scanType;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *fileMD5; // @synthesize fileMD5=_fileMD5;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) unsigned long long inodeNum; // @synthesize inodeNum=_inodeNum;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

