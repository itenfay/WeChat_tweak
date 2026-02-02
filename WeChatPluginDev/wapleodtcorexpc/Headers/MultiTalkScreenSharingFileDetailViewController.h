//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIColor;

@interface MultiTalkScreenSharingFileDetailViewController
{
    _Bool _automaticallyAdjustsWebScrollViewInsets;
    _Bool _showsToastForSwitchingLandscape;
    UIColor *_previewBackgroundColor;
    long long _fileEncryptType;
}

- (void).cxx_destruct;
@property(nonatomic) long long fileEncryptType; // @synthesize fileEncryptType=_fileEncryptType;
@property(nonatomic) _Bool showsToastForSwitchingLandscape; // @synthesize showsToastForSwitchingLandscape=_showsToastForSwitchingLandscape;
@property(nonatomic) _Bool automaticallyAdjustsWebScrollViewInsets; // @synthesize automaticallyAdjustsWebScrollViewInsets=_automaticallyAdjustsWebScrollViewInsets;
@property(retain, nonatomic) UIColor *previewBackgroundColor; // @synthesize previewBackgroundColor=_previewBackgroundColor;
- (id)filePathForScreenSharing;
- (id)customizedPreviewControllerForPreviewType:(unsigned int)arg1;
- (void)showToastForSwitchingLandscape;
- (void)showToastForSwitchingLandscapeIfNeeded;
- (void)updateViewAndSubviews:(id)arg1 withBackgroundColor:(id)arg2;
- (_Bool)findWKPasswordViewInView:(id)arg1;
- (void)checkFileEncryptType;
- (void)didLoadWebView;
- (void)didInitPreview;
- (void)updateWebScrollViewInset;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

