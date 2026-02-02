//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonVideoConverter, NSString;

@interface EmoticonCreateVideoUploadTask
{
    CDUnknownBlockType _convertStartBlock;
    CDUnknownBlockType _convertFailBlock;
    CDUnknownBlockType _convertSucBlock;
    NSString *_videoPath;
    EmoticonVideoConverter *_videoConverter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonVideoConverter *videoConverter; // @synthesize videoConverter=_videoConverter;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(copy, nonatomic) CDUnknownBlockType convertSucBlock; // @synthesize convertSucBlock=_convertSucBlock;
@property(copy, nonatomic) CDUnknownBlockType convertFailBlock; // @synthesize convertFailBlock=_convertFailBlock;
@property(copy, nonatomic) CDUnknownBlockType convertStartBlock; // @synthesize convertStartBlock=_convertStartBlock;
- (void)convertVideoToWxam:(id)arg1;
- (void)startUpload;
- (id)initWithVideoPath:(id)arg1;
- (id)init;

@end

