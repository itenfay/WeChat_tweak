//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UniversalC2CDataUploader;

@interface MultiMediaCgiUploadDataState
{
    UniversalC2CDataUploader *_uploader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UniversalC2CDataUploader *uploader; // @synthesize uploader=_uploader;
- (id)getStateName;
- (void)stop;
- (void)start;
- (long long)getUploaderScene;

@end

