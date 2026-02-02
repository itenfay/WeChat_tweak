//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImageBrowseView, NSString, UIImage;
@protocol CommonImageBrowserDelegate;

@interface CommonImageBrowseViewController
{
    MMImageBrowseView *m_imageView;
    UIImage *m_image;
    id m_singleTapOnNav;
    _Bool m_needDeleteAction;
    _Bool m_needActionSheet;
    id <CommonImageBrowserDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CommonImageBrowserDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool needActionSheet; // @synthesize needActionSheet=m_needActionSheet;
@property(nonatomic) _Bool needDeleteAction; // @synthesize needDeleteAction=m_needDeleteAction;
@property(retain, nonatomic) id m_singleTapOnNav; // @synthesize m_singleTapOnNav;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onSingleTapImageBrowseView;
- (void)onSavedPhotosAlbum:(id)arg1;
- (void)onOperate;
- (void)onSingleTapOnNavigationBar:(id)arg1;
- (void)dealloc;
- (id)initWithImage:(id)arg1;
- (void)willAppear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)initImageView;
- (void)initNavigationBar;
- (void)exitFullScreen;
- (void)setFullScreen:(_Bool)arg1;
- (void)removeNvGestureRecognizer;
- (void)addNvGestureRecognizer;
- (void)handleViewWillDisappear;
- (void)handleViewWillAppear;
- (void)showStatusBar;
- (void)hideStatusBar;
- (void)adjustImageViewRect;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

