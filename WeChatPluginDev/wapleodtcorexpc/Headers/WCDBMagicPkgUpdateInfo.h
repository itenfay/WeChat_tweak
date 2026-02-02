//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCDBMagicPkgUpdateInfo : NSObject
{
    unsigned int _pkgType;
    unsigned int _updateTime;
    unsigned int _lastUseTime;
    NSString *_pkgId;
    NSString *_url;
    NSString *_md5;
    NSString *_pkgPath;
    NSString *_unZipPath;
    NSString *_originalName;
    NSString *_wxaPath;
    NSString *_patchId;
    NSString *_version;
}

+ (void)__wcdb_index_13:(void *)arg1;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (id)swift_lastUseTime;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)lastUseTime;
+ (id)swift_updateTime;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)updateTime;
+ (id)swift_version;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)version;
+ (id)swift_patchId;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)patchId;
+ (id)swift_pkgType;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)pkgType;
+ (id)swift_wxaPath;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)wxaPath;
+ (id)swift_originalName;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)originalName;
+ (id)swift_unZipPath;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)unZipPath;
+ (id)swift_pkgPath;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)pkgPath;
+ (id)swift_md5;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)md5;
+ (id)swift_url;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)url;
+ (id)swift_pkgId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)pkgId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastUseTime; // @synthesize lastUseTime=_lastUseTime;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *patchId; // @synthesize patchId=_patchId;
@property(nonatomic) unsigned int pkgType; // @synthesize pkgType=_pkgType;
@property(retain, nonatomic) NSString *wxaPath; // @synthesize wxaPath=_wxaPath;
@property(retain, nonatomic) NSString *originalName; // @synthesize originalName=_originalName;
@property(retain, nonatomic) NSString *unZipPath; // @synthesize unZipPath=_unZipPath;
@property(retain, nonatomic) NSString *pkgPath; // @synthesize pkgPath=_pkgPath;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *pkgId; // @synthesize pkgId=_pkgId;
- (id)description;

@end

