//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMusicMVEditorCardCell, UIButton, UICollectionView, UIImage, UIImageView, UIView;

@interface MMMusicPostVideoAnimHelper : NSObject
{
    struct CGRect _thumbFrameInVC;
    UIImage *_thumbImage;
    MMMusicMVEditorCardCell *_curCell;
    UIView *_selfViewInVC;
    UIImageView *step1AnimView;
    UIImageView *step2AnimView;
    struct CGRect step3Frame;
    UIView *step3CropView;
    struct CGRect step3CropViewFrame;
    UIView *doneCropView;
    UIView *doneThumbImageView;
    UIView *cancelCropView;
    UIView *cancelThumbImageView;
    UIView *cancelCellView;
    _Bool isRecropMode;
    UIView *recropCellView;
    UIImageView *recropVideoFirstFrameView;
    struct CGRect recropVideoFrame;
    UIView *recropCropView;
    struct CGRect recropCropViewFrame;
    UICollectionView *m_collectionView;
    UIButton *m_cancelBtn;
    UIButton *m_doneBtn;
    UIView *m_titleLabel;
}

- (void).cxx_destruct;
- (void)createRecropVideoFirstFrameView:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)createCurCellViewViewSnapshot;
- (void)createCancelCellView;
- (void)createCancelThumbImageView:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)createDoneThumbImageView:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)createStep2View:(struct CGRect)arg1;
- (void)createStep1View;
- (void)startAnimWhenCropDoneWithCropView:(id)arg1 thumbImage:(id)arg2 editVideoPlayerViewFrame:(struct CGRect)arg3 animBlock:(CDUnknownBlockType)arg4 doneBlock:(CDUnknownBlockType)arg5;
- (void)startAnimWhenCropCancel:(id)arg1 cropView:(id)arg2 thumbImage:(id)arg3 editVideoPlayerViewFrame:(struct CGRect)arg4 animBlock:(CDUnknownBlockType)arg5 doneBlock:(CDUnknownBlockType)arg6;
- (void)startAnimWhenClickCropBtn:(id)arg1 cropView:(id)arg2 editVideoPlayerViewFrame:(struct CGRect)arg3 curVideoFirstFrameImage:(id)arg4 animBlock:(CDUnknownBlockType)arg5 doneBlock:(CDUnknownBlockType)arg6;
- (void)startAnimWithOnStepOneBlock:(CDUnknownBlockType)arg1 stepTwoBlock:(CDUnknownBlockType)arg2 stepThreeAnimBlock:(CDUnknownBlockType)arg3 stepThreeBlock:(CDUnknownBlockType)arg4;
- (void)updateWithThumbFrameInVC:(struct CGRect)arg1 thumbImage:(id)arg2 curCell:(id)arg3 selfViewInVC:(id)arg4 editVideoPlayerViewFrame:(struct CGRect)arg5 editVideoCropView:(id)arg6;
- (void)updateWithCurCell:(id)arg1 selfViewInVC:(id)arg2;
- (void)dealloc;
- (id)initWithCollectionView:(id)arg1 cancelBtn:(id)arg2 doneBtn:(id)arg3 titleLabel:(id)arg4;

@end

