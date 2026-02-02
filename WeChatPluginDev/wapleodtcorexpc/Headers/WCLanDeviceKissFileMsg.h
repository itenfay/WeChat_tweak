//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCLanDeviceKissFileMsg
{
    _Bool _isContainDetail;
    NSString *_fileName;
    NSString *_filePath;
    NSString *_fileMD5;
    unsigned long long _fileSize;
    NSString *_fileExt;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fileExt; // @synthesize fileExt=_fileExt;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *fileMD5; // @synthesize fileMD5=_fileMD5;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) _Bool isContainDetail; // @synthesize isContainDetail=_isContainDetail;

@end

