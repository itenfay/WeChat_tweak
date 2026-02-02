//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJSegmentCropInspectorViewModel, MJTimelineThumbnailView, UILabel;

@interface MJSegmentCropInspectorView
{
    UILabel *_descLabel;
    MJTimelineThumbnailView *_thumbnailView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJTimelineThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
- (void)updateResetButton;
- (void)didCancelCrop;
- (void)didFinishCrop;
- (void)layoutViews;
- (void)setupViews;
- (void)commonInit;

// Remaining properties
@property(retain, nonatomic) MJSegmentCropInspectorViewModel *viewModel; // @dynamic viewModel;

@end

