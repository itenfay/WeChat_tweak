//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton;

@interface MMAssetPickerActionBottomView : UIView
{
    UIView *_backgroundView;
    MMUIButton *_albumButton;
    MMUIButton *_cameraButton;
    CDUnknownBlockType _albumBlock;
    CDUnknownBlockType _cameraBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cameraBlock; // @synthesize cameraBlock=_cameraBlock;
@property(copy, nonatomic) CDUnknownBlockType albumBlock; // @synthesize albumBlock=_albumBlock;
@property(retain, nonatomic) MMUIButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(retain, nonatomic) MMUIButton *albumButton; // @synthesize albumButton=_albumButton;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)onCameraButtonClicked:(id)arg1;
- (void)onAlbumButtonClicked:(id)arg1;
- (void)updateAlbumButtonState:(_Bool)arg1 cameraButtonState:(_Bool)arg2;
- (id)createActionButton;
- (void)initCameraButton;
- (void)initAlbumButton;
- (void)initBackgroundView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 albumBlock:(CDUnknownBlockType)arg2 cameraBlock:(CDUnknownBlockType)arg3;
- (void)setBackgroundViewAlpha:(double)arg1;
- (void)setBackgroundViewColor:(id)arg1;

@end

