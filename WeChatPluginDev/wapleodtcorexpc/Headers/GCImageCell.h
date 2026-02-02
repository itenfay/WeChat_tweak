//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, SightIconView, UIImageView, UILabel, UIView, YYAsyncImageView;

@interface GCImageCell
{
    YYAsyncImageView *m_imageView;
    UIImageView *m_imageDownloadFailView;
    UIImageView *m_imageLoadingBackgroundView;
    SightIconView *m_imageLoadingView;
    UIImageView *m_icloudImageIcon;
    UIImageView *m_icloudBackground;
    UILabel *m_icloudLabel;
    UIView *m_imageMaskView;
    UIView *_imgContentView;
}

+ (void)onCalculatLayoutInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *imgContentView; // @synthesize imgContentView=_imgContentView;
- (void)setHighlighted:(_Bool)arg1;
- (void)removeICloudIcon;
- (void)addICloudIcon;
- (void)stopLoading;
- (void)startLoadingWithUseProgress:(_Bool)arg1;
- (void)startLoading;
- (void)addDownloadFailView;
- (void)updateStatus;
- (void)handleDownload;
- (void)handleIcloudPointProgress:(int)arg1;
- (void)handleUpload;
- (id)getCoverImage;
- (void)initImageView;
- (id)imgMsgWrapper;
- (id)bindImgCellModel;
- (void)configureWithCellModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

