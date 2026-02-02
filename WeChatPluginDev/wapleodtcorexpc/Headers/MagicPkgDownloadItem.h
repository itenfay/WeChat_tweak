//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MagicPkgDownloadItem : NSObject
{
    unsigned int _responseState;
    unsigned int _packageType;
    unsigned int _networkType;
    unsigned int _fileSize;
    unsigned int _errorCode;
    NSString *_cdnUrl;
    NSString *_fileMd5;
    NSString *_patchId;
    NSString *_packageID;
    NSString *_patchApkMd5;
    NSString *_baseApkMd5;
    NSString *_clientVersion;
    NSString *_originalName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *originalName; // @synthesize originalName=_originalName;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *baseApkMd5; // @synthesize baseApkMd5=_baseApkMd5;
@property(retain, nonatomic) NSString *patchApkMd5; // @synthesize patchApkMd5=_patchApkMd5;
@property(retain, nonatomic) NSString *packageID; // @synthesize packageID=_packageID;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *patchId; // @synthesize patchId=_patchId;
@property(retain, nonatomic) NSString *fileMd5; // @synthesize fileMd5=_fileMd5;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl=_cdnUrl;
@property(nonatomic) unsigned int networkType; // @synthesize networkType=_networkType;
@property(nonatomic) unsigned int packageType; // @synthesize packageType=_packageType;
@property(nonatomic) unsigned int responseState; // @synthesize responseState=_responseState;

@end

