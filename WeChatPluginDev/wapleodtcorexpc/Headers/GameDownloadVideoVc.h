//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMProgressViewEx, MMWebImageView, NSString;

@interface GameDownloadVideoVc
{
    _Bool _isSkipCelluarTips;
    _Bool _starFailed;
    _Bool _isPopByDownLoadCompleted;
    _Bool _downloadEventCompleted;
    _Bool _oriNavigationBarHidden;
    CDUnknownBlockType _completedBlock;
    NSString *_videoUrl;
    NSString *_thumbUrl;
    MMWebImageView *_imageView;
    MMProgressViewEx *_progressView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool oriNavigationBarHidden; // @synthesize oriNavigationBarHidden=_oriNavigationBarHidden;
@property(nonatomic) _Bool downloadEventCompleted; // @synthesize downloadEventCompleted=_downloadEventCompleted;
@property(nonatomic) _Bool isPopByDownLoadCompleted; // @synthesize isPopByDownLoadCompleted=_isPopByDownLoadCompleted;
@property(retain, nonatomic) MMProgressViewEx *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) _Bool starFailed; // @synthesize starFailed=_starFailed;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(copy, nonatomic) CDUnknownBlockType completedBlock; // @synthesize completedBlock=_completedBlock;
@property(nonatomic) _Bool isSkipCelluarTips; // @synthesize isSkipCelluarTips=_isSkipCelluarTips;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)removeTmpPath;
- (void)OnCdnDownload:(id)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (_Bool)checkUrlMatched:(id)arg1;
- (void)notifyDelegateWithErrorMsg:(id)arg1;
- (void)endWithErrorMsg:(id)arg1;
- (void)setupProgressView;
- (void)goBack;
- (void)setupGoBackView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)tmpPathForVideoUrl:(id)arg1;
- (void)startDownloadVideo;
- (void)viewDidLoad;
- (id)initWithVideoUrl:(id)arg1 thumbUrl:(id)arg2;

@end

