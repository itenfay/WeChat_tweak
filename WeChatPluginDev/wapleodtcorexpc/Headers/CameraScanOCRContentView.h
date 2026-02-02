//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAAnimationGroup, MMSightRecordView, UIButton, UIImageView;
@protocol CameraScanOCRContentViewDelegate;

@interface CameraScanOCRContentView
{
    double _scanLineTopCenterY;
    double _scanLineBottomCenterY;
    UIButton *_takePhotoButton;
    MMSightRecordView *_takePhotoView;
    UIImageView *_scanLineView;
    CAAnimationGroup *_scanLineAnimation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAAnimationGroup *scanLineAnimation; // @synthesize scanLineAnimation=_scanLineAnimation;
@property(retain, nonatomic) UIImageView *scanLineView; // @synthesize scanLineView=_scanLineView;
@property(retain, nonatomic) MMSightRecordView *takePhotoView; // @synthesize takePhotoView=_takePhotoView;
@property(retain, nonatomic) UIButton *takePhotoButton; // @synthesize takePhotoButton=_takePhotoButton;
- (void)setCloseButtonBottom:(double)arg1 infoLableTop:(double)arg2;
- (void)stopScanLineAnimation;
- (void)startScanLineAnimation;
- (void)onTakePhotoBtnPressed:(id)arg1;
- (void)onTakePhotoBtnClicked:(id)arg1;
- (void)hiddenTakePhotoButton;
- (void)showTakePhotoButton;
- (void)layoutSubviews;
- (void)setupScanLineView;
- (void)setupTakePhotoView;
- (void)setupTakePhotoButton;
- (void)setupSubViews;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <CameraScanOCRContentViewDelegate> delegate; // @dynamic delegate;

@end

