//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CdnUploadWeappMediaInfo : NSObject
{
    _Bool _isStorageMode;
    int _fileType;
    int _appType;
    int _snsUploadVersion;
    NSString *_fileKey;
    NSString *_filePath;
    NSString *_thumbFilePath;
    NSData *_fileData;
    NSData *_thumbFileData;
}

- (void).cxx_destruct;
@property(nonatomic) int snsUploadVersion; // @synthesize snsUploadVersion=_snsUploadVersion;
@property(nonatomic) _Bool isStorageMode; // @synthesize isStorageMode=_isStorageMode;
@property(retain, nonatomic) NSData *thumbFileData; // @synthesize thumbFileData=_thumbFileData;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
@property(retain, nonatomic) NSString *thumbFilePath; // @synthesize thumbFilePath=_thumbFilePath;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;
@property(nonatomic) int appType; // @synthesize appType=_appType;
@property(nonatomic) int fileType; // @synthesize fileType=_fileType;

@end

