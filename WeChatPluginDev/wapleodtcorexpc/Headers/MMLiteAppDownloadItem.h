//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiteAppEncryptMetaData, MMLiteAppOpenParam, NSString, ResourceMeta;

@interface MMLiteAppDownloadItem : NSObject
{
    _Bool _isUseCronetDownload;
    _Bool _isDownloadMediaResource;
    unsigned int _resourceVersion;
    NSString *_appId;
    NSString *_baseId;
    NSString *_pId;
    NSString *_filePath;
    NSString *_signatureKey;
    NSString *_type;
    NSString *_resourceName;
    MMLiteAppOpenParam *_openParam;
    ResourceMeta *_resMeta;
    unsigned long long _startTime;
    unsigned long long _retryCount;
    unsigned long long _from;
    unsigned long long _checkTime;
    unsigned long long _downloadTime;
    MMLiteAppEncryptMetaData *_encryptMetaData;
    long long _checkUpdateFrom;
    unsigned long long _pkgCompressAlgorithm;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long pkgCompressAlgorithm; // @synthesize pkgCompressAlgorithm=_pkgCompressAlgorithm;
@property(nonatomic) _Bool isDownloadMediaResource; // @synthesize isDownloadMediaResource=_isDownloadMediaResource;
@property(nonatomic) long long checkUpdateFrom; // @synthesize checkUpdateFrom=_checkUpdateFrom;
@property(retain, nonatomic) MMLiteAppEncryptMetaData *encryptMetaData; // @synthesize encryptMetaData=_encryptMetaData;
@property(nonatomic) _Bool isUseCronetDownload; // @synthesize isUseCronetDownload=_isUseCronetDownload;
@property(nonatomic) unsigned long long downloadTime; // @synthesize downloadTime=_downloadTime;
@property(nonatomic) unsigned long long checkTime; // @synthesize checkTime=_checkTime;
@property(nonatomic) unsigned long long from; // @synthesize from=_from;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) ResourceMeta *resMeta; // @synthesize resMeta=_resMeta;
@property(retain, nonatomic) MMLiteAppOpenParam *openParam; // @synthesize openParam=_openParam;
@property(nonatomic) unsigned int resourceVersion; // @synthesize resourceVersion=_resourceVersion;
@property(retain, nonatomic) NSString *resourceName; // @synthesize resourceName=_resourceName;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *signatureKey; // @synthesize signatureKey=_signatureKey;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *pId; // @synthesize pId=_pId;
@property(retain, nonatomic) NSString *baseId; // @synthesize baseId=_baseId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)init;

@end

