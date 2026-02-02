//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveStorageCleanupPinningToken, NSString;

@interface MMFinderLiveUploadImageMediaItem
{
    NSString *_imageFilePath;
    NSString *_thumbFilePath;
    MMLiveStorageCleanupPinningToken *_pinningToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveStorageCleanupPinningToken *pinningToken; // @synthesize pinningToken=_pinningToken;
@property(copy, nonatomic) NSString *thumbFilePath; // @synthesize thumbFilePath=_thumbFilePath;
@property(copy, nonatomic) NSString *imageFilePath; // @synthesize imageFilePath=_imageFilePath;
- (void)setNewUploadInfo:(id)arg1;
- (struct C2CUploadRequest)getCdnUploadHeader;
- (_Bool)checkCdnUploadEnable;
- (_Bool)checkFileExist;
- (id)initWithUploadTaskId:(id)arg1 imageFilePath:(id)arg2 thumbFilePath:(id)arg3;

@end

