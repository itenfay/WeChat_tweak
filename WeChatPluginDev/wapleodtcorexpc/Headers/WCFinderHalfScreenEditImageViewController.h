//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderAlbumScrollViewParamModel;

@interface WCFinderHalfScreenEditImageViewController
{
    _Bool _hiddenCropBtn;
    double _stageFrameY;
    WCFinderAlbumScrollViewParamModel *_previewScrollViewParamModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderAlbumScrollViewParamModel *previewScrollViewParamModel; // @synthesize previewScrollViewParamModel=_previewScrollViewParamModel;
@property(nonatomic) double stageFrameY; // @synthesize stageFrameY=_stageFrameY;
@property(nonatomic) _Bool hiddenCropBtn; // @synthesize hiddenCropBtn=_hiddenCropBtn;
- (_Bool)shouldSaveUnCropImages;
- (void)onEditImageLayoutViewChangeAssetSuc;
- (void)showEditImageViewOn;
- (void)viewDidLoad;
- (id)initWithAssets:(id)arg1 images:(id)arg2;

@end

