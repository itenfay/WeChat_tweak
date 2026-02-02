//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FavoritesCDNInfo : NSObject
{
    unsigned int IntRes1;
    unsigned int IntRes2;
    unsigned int _localItemId;
    int _status;
    int _isThumb;
    int _dataType;
    NSString *StrRes1;
    NSString *StrRes2;
    NSString *_localDataID;
    NSString *_cdnUrl;
    unsigned long long _size;
    NSString *_cdnKey;
    NSString *_md5;
    NSString *_head256Md5;
    NSString *_streamId;
    NSString *_dataFmt;
    NSString *_clientMsgID;
    NSString *_sourcePath;
}

+ (void)__wcdb_column_constraint_75:(void *)arg1;
+ (void)__wcdb_column_constraint_74:(void *)arg1;
+ (void)__wcdb_column_constraint_73:(void *)arg1;
+ (void)__wcdb_column_constraint_72:(void *)arg1;
+ (void)__wcdb_column_constraint_71:(void *)arg1;
+ (void)__wcdb_column_constraint_70:(void *)arg1;
+ (void)__wcdb_column_constraint_69:(void *)arg1;
+ (void)__wcdb_index_68:(void *)arg1;
+ (void)__wcdb_index_67:(void *)arg1;
+ (id)swift_StrRes2;
+ (const void *)__wcdb_synthesize_66:(void *)arg1;
+ (const void *)StrRes2;
+ (id)swift_StrRes1;
+ (const void *)__wcdb_synthesize_65:(void *)arg1;
+ (const void *)StrRes1;
+ (id)swift_IntRes2;
+ (const void *)__wcdb_synthesize_64:(void *)arg1;
+ (const void *)IntRes2;
+ (id)swift_IntRes1;
+ (const void *)__wcdb_synthesize_63:(void *)arg1;
+ (const void *)IntRes1;
+ (id)swift_sourcePath;
+ (const void *)__wcdb_synthesize_62:(void *)arg1;
+ (const void *)sourcePath;
+ (id)swift_clientMsgID;
+ (const void *)__wcdb_synthesize_61:(void *)arg1;
+ (const void *)clientMsgID;
+ (id)swift_dataFmt;
+ (const void *)__wcdb_synthesize_60:(void *)arg1;
+ (const void *)dataFmt;
+ (id)swift_streamId;
+ (const void *)__wcdb_synthesize_59:(void *)arg1;
+ (const void *)streamId;
+ (id)swift_dataType;
+ (const void *)__wcdb_synthesize_58:(void *)arg1;
+ (const void *)dataType;
+ (id)swift_isThumb;
+ (const void *)__wcdb_synthesize_57:(void *)arg1;
+ (const void *)isThumb;
+ (id)swift_head256Md5;
+ (const void *)__wcdb_synthesize_56:(void *)arg1;
+ (const void *)head256Md5;
+ (id)swift_md5;
+ (const void *)__wcdb_synthesize_55:(void *)arg1;
+ (const void *)md5;
+ (id)swift_cdnKey;
+ (const void *)__wcdb_synthesize_54:(void *)arg1;
+ (const void *)cdnKey;
+ (id)swift_status;
+ (const void *)__wcdb_synthesize_53:(void *)arg1;
+ (const void *)status;
+ (id)swift_size;
+ (const void *)__wcdb_synthesize_52:(void *)arg1;
+ (const void *)size;
+ (id)swift_cdnUrl;
+ (const void *)__wcdb_synthesize_51:(void *)arg1;
+ (const void *)cdnUrl;
+ (id)swift_localDataID;
+ (const void *)__wcdb_synthesize_50:(void *)arg1;
+ (const void *)localDataID;
+ (id)swift_localItemId;
+ (const void *)__wcdb_synthesize_49:(void *)arg1;
+ (const void *)localItemId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
@property(retain, nonatomic) NSString *clientMsgID; // @synthesize clientMsgID=_clientMsgID;
@property(retain, nonatomic) NSString *dataFmt; // @synthesize dataFmt=_dataFmt;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(nonatomic) int dataType; // @synthesize dataType=_dataType;
@property(nonatomic) int isThumb; // @synthesize isThumb=_isThumb;
@property(retain, nonatomic) NSString *head256Md5; // @synthesize head256Md5=_head256Md5;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *cdnKey; // @synthesize cdnKey=_cdnKey;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl=_cdnUrl;
@property(retain, nonatomic) NSString *localDataID; // @synthesize localDataID=_localDataID;
@property(nonatomic) unsigned int localItemId; // @synthesize localItemId=_localItemId;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2;
@property(nonatomic) unsigned int IntRes1; // @synthesize IntRes1;

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

