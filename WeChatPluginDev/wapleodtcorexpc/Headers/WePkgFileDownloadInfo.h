//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WePkgFileDownloadInfo : NSObject
{
    _Bool _isBigPackage;
    _Bool _isAtomicPart;
    _Bool _isPatchFile;
    unsigned int _fileSize;
    NSString *_pkgId;
    NSString *_version;
    NSString *_md5;
    NSString *_url;
    unsigned long long _downloadDuration;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long downloadDuration; // @synthesize downloadDuration=_downloadDuration;
@property(nonatomic) _Bool isPatchFile; // @synthesize isPatchFile=_isPatchFile;
@property(nonatomic) _Bool isAtomicPart; // @synthesize isAtomicPart=_isAtomicPart;
@property(nonatomic) _Bool isBigPackage; // @synthesize isBigPackage=_isBigPackage;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *pkgId; // @synthesize pkgId=_pkgId;

@end

