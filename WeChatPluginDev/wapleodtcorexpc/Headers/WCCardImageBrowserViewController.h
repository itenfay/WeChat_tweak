//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImageBrowseView, NSString, SightIconView, UIImage, UIImageView;
@protocol WCCardImageBrowserDelegate;

@interface WCCardImageBrowserViewController
{
    _Bool _needDeleteAction;
    _Bool _needActionSheet;
    id <WCCardImageBrowserDelegate> _delegate;
    MMImageBrowseView *_imageView;
    UIImage *_image;
    SightIconView *_iconView;
    UIImageView *_originView;
    struct CGRect _originRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *originView; // @synthesize originView=_originView;
@property(retain, nonatomic) SightIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) MMImageBrowseView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct CGRect originRect; // @synthesize originRect=_originRect;
@property(nonatomic) __weak id <WCCardImageBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool needActionSheet; // @synthesize needActionSheet=_needActionSheet;
@property(nonatomic) _Bool needDeleteAction; // @synthesize needDeleteAction=_needDeleteAction;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)singleOnIconView;
- (void)onSingleTapImageBrowseView;
- (void)onSavedPhotosAlbum:(id)arg1;
- (void)onOperate;
- (void)startPlayAnimation;
- (void)setByOriginRect:(struct CGRect)arg1 originImage:(id)arg2;
- (void)adjustImageViewRect;
- (void)initView;
- (void)configImage:(id)arg1;
- (id)initWithImage:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)onSetStatusBarFontBlack;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

