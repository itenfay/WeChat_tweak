//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CdnInchoateUploadInfo : NSObject
{
    int _filetype;
    unsigned int _crc32;
    NSString *_clientMsgID;
    NSString *_fileID;
    NSString *_aeskey;
    NSString *_fileMD5;
    NSString *_middleFileMD5;
    NSString *_thumbFileMD5;
    NSString *_videoNewMD5;
    unsigned long long _fileSize;
    unsigned long long _middleFileSize;
    unsigned long long _thumbFileSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int crc32; // @synthesize crc32=_crc32;
@property(nonatomic) unsigned long long thumbFileSize; // @synthesize thumbFileSize=_thumbFileSize;
@property(nonatomic) unsigned long long middleFileSize; // @synthesize middleFileSize=_middleFileSize;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *videoNewMD5; // @synthesize videoNewMD5=_videoNewMD5;
@property(retain, nonatomic) NSString *thumbFileMD5; // @synthesize thumbFileMD5=_thumbFileMD5;
@property(retain, nonatomic) NSString *middleFileMD5; // @synthesize middleFileMD5=_middleFileMD5;
@property(retain, nonatomic) NSString *fileMD5; // @synthesize fileMD5=_fileMD5;
@property(retain, nonatomic) NSString *aeskey; // @synthesize aeskey=_aeskey;
@property(retain, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(retain, nonatomic) NSString *clientMsgID; // @synthesize clientMsgID=_clientMsgID;
@property(nonatomic) int filetype; // @synthesize filetype=_filetype;

@end

