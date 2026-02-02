//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CdnImageDetectMediaInfo : NSObject
{
    _Bool _enableHitCheck;
    _Bool _trySafeCdn;
    unsigned int _fileType;
    NSString *_fileKey;
    long long _fileSize;
    NSString *_filePath;
    NSString *_forwardFileID;
    NSString *_forwardAesKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *forwardAesKey; // @synthesize forwardAesKey=_forwardAesKey;
@property(retain, nonatomic) NSString *forwardFileID; // @synthesize forwardFileID=_forwardFileID;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) unsigned int fileType; // @synthesize fileType=_fileType;
@property(nonatomic) _Bool trySafeCdn; // @synthesize trySafeCdn=_trySafeCdn;
@property(nonatomic) _Bool enableHitCheck; // @synthesize enableHitCheck=_enableHitCheck;
@property(retain, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;

@end

