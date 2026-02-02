//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageIntialView, NSString, UIImage;
@protocol MMImageCropperDelegate;

@interface MMImageCropperViewController
{
    EditImageIntialView *_editImageInitialView;
    id <MMImageCropperDelegate> _delegate;
    UIImage *_originalImage;
    long long _cropperViewStyle;
    struct CGSize _rectRatioSize;
}

- (void).cxx_destruct;
@property(nonatomic) long long cropperViewStyle; // @synthesize cropperViewStyle=_cropperViewStyle;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(nonatomic) struct CGSize rectRatioSize; // @synthesize rectRatioSize=_rectRatioSize;
@property(nonatomic) __weak id <MMImageCropperDelegate> delegate; // @synthesize delegate=_delegate;
- (id)currentViewController;
- (void)getOriginalImage:(CDUnknownBlockType)arg1;
- (void)getDisplayImage:(CDUnknownBlockType)arg1;
- (void)OnClickEditImageDoneBarButton;
- (void)OnClickEditImageBackBarButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initView;
- (void)viewDidLoad;
- (_Bool)shouldInteractivePop;
- (id)initWithImage:(id)arg1 andScene:(long long)arg2;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

