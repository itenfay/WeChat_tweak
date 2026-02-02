//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MiniGameLocalVideoInfo : NSObject
{
    _Bool _isValid;
    unsigned int _userId;
    unsigned int _createTime;
    unsigned int _durationSec;
    unsigned int _appVersion;
    unsigned int _appState;
    unsigned int _isDevEdited;
    NSString *_fileId;
    NSString *_appId;
    NSString *_appName;
    NSString *_filePath;
    NSString *_orgFilePath;
    NSString *_coverPath;
    NSString *_extJsonData;
    NSString *_title;
    NSString *_desc;
}

+ (void)__wcdb_index_17:(void *)arg1;
+ (void)__wcdb_index_16:(void *)arg1;
+ (void)__wcdb_column_constraint_15:(void *)arg1;
+ (id)swift_isDevEdited;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)isDevEdited;
+ (id)swift_appState;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)appState;
+ (id)swift_appVersion;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)appVersion;
+ (id)swift_desc;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)desc;
+ (id)swift_title;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)title;
+ (id)swift_durationSec;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)durationSec;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_extJsonData;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)extJsonData;
+ (id)swift_coverPath;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)coverPath;
+ (id)swift_orgFilePath;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)orgFilePath;
+ (id)swift_filePath;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)filePath;
+ (id)swift_appName;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)appName;
+ (id)swift_appId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)appId;
+ (id)swift_userId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)userId;
+ (id)swift_fileId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)fileId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int isDevEdited; // @synthesize isDevEdited=_isDevEdited;
@property(nonatomic) unsigned int appState; // @synthesize appState=_appState;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int durationSec; // @synthesize durationSec=_durationSec;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *extJsonData; // @synthesize extJsonData=_extJsonData;
@property(retain, nonatomic) NSString *coverPath; // @synthesize coverPath=_coverPath;
@property(retain, nonatomic) NSString *orgFilePath; // @synthesize orgFilePath=_orgFilePath;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) unsigned int userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
- (id)absThumbPath;
- (id)absVideoFilePath;
- (_Bool)isValid;
- (id)initWithVideoFile:(id)arg1 userId:(unsigned int)arg2;
- (id)getAbsFilePathWithRelativePath:(id)arg1;

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

