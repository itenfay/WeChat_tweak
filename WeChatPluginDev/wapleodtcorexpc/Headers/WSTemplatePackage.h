//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WSTemplatePackage : NSObject
{
    NSString *_folderPath;
    NSString *_htmlPath;
    NSDictionary *_md5map;
    NSDictionary *_customDataDic;
    NSDictionary *_configDic;
    NSString *_pakageName;
    NSDictionary *_sha1Map;
}

+ (_Bool)MustCheckFileDigest:(unsigned long long)arg1;
+ (id)VerifyTextForBizType:(unsigned long long)arg1;
+ (_Bool)VerifySHA1ForFiles:(id)arg1 withSHA1Map:(id)arg2 bizType:(unsigned long long)arg3;
+ (_Bool)verifyMD5ForTemplateFiles:(id)arg1 withMD5Map:(id)arg2 bizType:(unsigned long long)arg3;
+ (unsigned long long)verifyTemplateContentStatusForPath:(id)arg1 bizType:(unsigned long long)arg2;
+ (id)makeDictionaryFromFileInPath:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *sha1Map; // @synthesize sha1Map=_sha1Map;
@property(copy, nonatomic) NSString *pakageName; // @synthesize pakageName=_pakageName;
@property(retain, nonatomic) NSDictionary *configDic; // @synthesize configDic=_configDic;
@property(retain, nonatomic) NSDictionary *customDataDic; // @synthesize customDataDic=_customDataDic;
@property(retain, nonatomic) NSDictionary *md5map; // @synthesize md5map=_md5map;
@property(readonly, copy, nonatomic) NSString *htmlPath; // @synthesize htmlPath=_htmlPath;
@property(copy, nonatomic) NSString *folderPath; // @synthesize folderPath=_folderPath;
- (id)description;
@property(readonly, nonatomic) unsigned int version;
- (_Bool)fileExist;
- (_Bool)isValid;
- (void)removeFile;
- (void)reloadConfig;
- (id)initWithPackagePath:(id)arg1 packageName:(id)arg2;

@end

