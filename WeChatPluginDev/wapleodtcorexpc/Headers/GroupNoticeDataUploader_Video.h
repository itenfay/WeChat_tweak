//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GroupNoticeDataUploader_Video
{
    _Bool _compressVideoFail;
    CDUnknownBlockType _completeBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(nonatomic) _Bool compressVideoFail; // @synthesize compressVideoFail=_compressVideoFail;
- (void)onFavVideoCompressFinish:(id)arg1 isSuccess:(_Bool)arg2;
- (_Bool)readyToUploadData;
- (void)startUploadData:(CDUnknownBlockType)arg1;

@end

