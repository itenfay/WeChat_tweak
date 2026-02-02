//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CUploadHDHeadImgWrap, NSString;
@protocol HeadImgDelegate;

@interface CUploadHDHeadImg
{
    NSString *m_nsFile;
    CUploadHDHeadImgWrap *m_currTask;
    id <HeadImgDelegate> delegate;
}

+ (id)generateNormalHeadData:(id)arg1;
+ (id)generateNormalHeadImage:(id)arg1;
+ (id)generateHDHeadDataLow:(id)arg1;
+ (id)generateHDHeadData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <HeadImgDelegate> delegate; // @synthesize delegate;
- (void)onUploadPartFail:(id)arg1;
- (void)onUploadComplete:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)IsUploadIngImg;
- (unsigned int)uploadHDImg:(id)arg1 imgType:(unsigned int)arg2 qualityType:(unsigned int)arg3;
- (unsigned int)uploadHDImg:(id)arg1 imgType:(unsigned int)arg2;
- (void)stopUpload;
- (unsigned int)InternalUpload:(id)arg1 imgType:(unsigned int)arg2 qualityType:(unsigned int)arg3;
- (void)sendHeadImgRequestWithTaskInfo:(id)arg1 uploadTask:(id)arg2;
- (_Bool)uploadTaskWithCdn:(id)arg1;
- (_Bool)uploadTaskWithCgi:(id)arg1;
- (_Bool)uploadTask:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

