//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GameHaowanMediaInfoTableItem
{
    unsigned int _mediaType;
    int _uploadState;
    unsigned int _editFlag;
    NSString *_fileKey;
    NSString *_postId;
    NSString *_localId;
    NSString *_localPath;
    unsigned long long _fileSize;
    NSString *_cdnUrl;
}

+ (void)__wcdb_column_constraint_20:(void *)arg1;
+ (id)swift_editFlag;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)editFlag;
+ (id)swift_uploadState;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)uploadState;
+ (id)swift_cdnUrl;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)cdnUrl;
+ (id)swift_mediaType;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)mediaType;
+ (id)swift_fileSize;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)fileSize;
+ (id)swift_localPath;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)localPath;
+ (id)swift_localId;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)localId;
+ (id)swift_postId;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)postId;
+ (id)swift_fileKey;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)fileKey;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int editFlag; // @synthesize editFlag=_editFlag;
@property(nonatomic) int uploadState; // @synthesize uploadState=_uploadState;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl=_cdnUrl;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(retain, nonatomic) NSString *localId; // @synthesize localId=_localId;
@property(retain, nonatomic) NSString *postId; // @synthesize postId=_postId;
@property(retain, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;
@property(retain, nonatomic) NSString *abosulteLocalPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

