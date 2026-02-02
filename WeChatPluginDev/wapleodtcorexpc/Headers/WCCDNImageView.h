//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCDNImageView
{
    _Bool _downloading;
    int _fileType;
    NSString *_fileUrl;
    NSString *_aeskey;
    NSString *_filePath;
}

- (void).cxx_destruct;
@property(nonatomic) int fileType; // @synthesize fileType=_fileType;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *aeskey; // @synthesize aeskey=_aeskey;
@property(retain, nonatomic) NSString *fileUrl; // @synthesize fileUrl=_fileUrl;
@property(nonatomic) _Bool downloading; // @synthesize downloading=_downloading;
- (void)startDownload;
- (void)checkImageData;
- (void)setFileUrl:(id)arg1 aesk:(id)arg2 fileType:(int)arg3 filePath:(id)arg4;
- (void)setDefaultImage:(id)arg1;

@end

