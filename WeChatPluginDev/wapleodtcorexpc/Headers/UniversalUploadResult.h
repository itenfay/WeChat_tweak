//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface UniversalUploadResult : NSObject
{
    _Bool _isSucc;
    int _fileType;
    int _middleFileType;
    int _thumbFileType;
    NSString *_fileId;
    NSString *_aesKey;
    NSString *_fileMd5;
    NSString *_imgInfo;
    NSString *_middleFileId;
    NSString *_middleAesKey;
    NSString *_middleFileMd5;
    NSString *_thumbFileId;
    NSString *_thumbAesKey;
    NSString *_thumbFileMd5;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *thumbFileMd5; // @synthesize thumbFileMd5=_thumbFileMd5;
@property(retain, nonatomic) NSString *thumbAesKey; // @synthesize thumbAesKey=_thumbAesKey;
@property(retain, nonatomic) NSString *thumbFileId; // @synthesize thumbFileId=_thumbFileId;
@property(nonatomic) int thumbFileType; // @synthesize thumbFileType=_thumbFileType;
@property(retain, nonatomic) NSString *middleFileMd5; // @synthesize middleFileMd5=_middleFileMd5;
@property(retain, nonatomic) NSString *middleAesKey; // @synthesize middleAesKey=_middleAesKey;
@property(retain, nonatomic) NSString *middleFileId; // @synthesize middleFileId=_middleFileId;
@property(nonatomic) int middleFileType; // @synthesize middleFileType=_middleFileType;
@property(retain, nonatomic) NSString *imgInfo; // @synthesize imgInfo=_imgInfo;
@property(retain, nonatomic) NSString *fileMd5; // @synthesize fileMd5=_fileMd5;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(nonatomic) int fileType; // @synthesize fileType=_fileType;
@property(nonatomic) _Bool isSucc; // @synthesize isSucc=_isSucc;

@end

