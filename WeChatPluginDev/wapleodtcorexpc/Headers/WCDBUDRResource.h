//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCDBUDRResource : NSObject
{
    unsigned int _version;
    unsigned int _category;
    unsigned int _type;
    NSString *_key;
    NSString *_projectId;
    NSString *_name;
    NSString *_url;
    NSString *_md5;
    unsigned long long _size;
    NSString *_path;
    NSString *_postPath;
    unsigned long long _createTime;
    unsigned long long _updateTime;
    unsigned long long _extId;
    NSString *_signatureKey;
    NSString *_fileKey;
    unsigned long long _expireTime;
    NSData *_extInfo;
    NSString *_specifiedExtInfo;
    NSString *_virtualPath;
}

+ (void)__wcdb_column_constraint_20:(void *)arg1;
+ (id)swift_virtualPath;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)virtualPath;
+ (id)swift_specifiedExtInfo;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)specifiedExtInfo;
+ (id)swift_extInfo;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)extInfo;
+ (id)swift_expireTime;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)expireTime;
+ (id)swift_fileKey;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)fileKey;
+ (id)swift_signatureKey;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)signatureKey;
+ (id)swift_extId;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)extId;
+ (id)swift_updateTime;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)updateTime;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_type;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)type;
+ (id)swift_category;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)category;
+ (id)swift_postPath;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)postPath;
+ (id)swift_path;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)path;
+ (id)swift_size;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)size;
+ (id)swift_md5;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)md5;
+ (id)swift_url;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)url;
+ (id)swift_version;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)version;
+ (id)swift_name;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)name;
+ (id)swift_projectId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)projectId;
+ (id)swift_key;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)key;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *virtualPath; // @synthesize virtualPath=_virtualPath;
@property(retain, nonatomic) NSString *specifiedExtInfo; // @synthesize specifiedExtInfo=_specifiedExtInfo;
@property(retain, nonatomic) NSData *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned long long expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;
@property(retain, nonatomic) NSString *signatureKey; // @synthesize signatureKey=_signatureKey;
@property(nonatomic) unsigned long long extId; // @synthesize extId=_extId;
@property(nonatomic) unsigned long long updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *postPath; // @synthesize postPath=_postPath;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *projectId; // @synthesize projectId=_projectId;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (id)description;

@end

