//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class OMCBatchThumbnailProvider, UIImageView, UILabel;

@interface MJSegmentCoverCell
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    OMCBatchThumbnailProvider *_batchThumbnailProvider;
    long long _taskID;
}

- (void).cxx_destruct;
@property(nonatomic) long long taskID; // @synthesize taskID=_taskID;
@property(retain, nonatomic) OMCBatchThumbnailProvider *batchThumbnailProvider; // @synthesize batchThumbnailProvider=_batchThumbnailProvider;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)cancelRequestImageFromBatchProvider;
- (void)cancelRequestImageFromSingleProvider;
- (void)cancelRequestImage;
- (void)requestImageFromBatchProvider;
- (void)requestImageFromSingleProvider;
- (void)requestImage;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)commonInit;

@end

