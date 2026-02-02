//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAsset, MMGifPreviewBrowserView, NSString, UIButton, UIImageView, UILabel;
@protocol MMImagePickerControlCenter, MMImagePickerManagerDelegate;

@interface MMGifPreviewBrowserController
{
    UIImageView *m_bottomBar;
    UIButton *m_sendButton;
    UILabel *m_fileSizeLabel;
    MMGifPreviewBrowserView *m_gifBrowser;
    NSString *m_finishWording;
    id <MMImagePickerControlCenter> _controlCenter;
    id <MMImagePickerManagerDelegate> _delegate;
    MMAsset *_asset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) __weak id <MMImagePickerManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter; // @synthesize controlCenter=_controlCenter;
- (void)onAssetBrowserViewLoadFinished:(id)arg1;
- (void)onAssetBrowserViewSingleTap:(id)arg1;
- (void)OnSend:(id)arg1;
- (void)OnCancel:(id)arg1;
- (void)hideToolBar:(_Bool)arg1;
- (void)initBottomBar;
- (void)initGifView;
- (void)viewWillBeInteractivePoped;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

