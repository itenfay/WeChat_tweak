//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameVideoAlbumController, MMAssetPickerController, MMImagePickerManagerOptionObj, MMUIButton, MMUIViewController, NSArray, NSString, UINavigationController, UIView;
@protocol GameVideoAlbumControllerDelegate, MMImagePickerManagerDelegate;

@interface GameHaowanTabViewController
{
    NSArray *_albumInfos;
    MMImagePickerManagerOptionObj *_imagePickerManagerOptionObj;
    _Bool _ignoreVideoPreview;
    _Bool _isInPreview;
    id <GameVideoAlbumControllerDelegate> _delegate;
    id <MMImagePickerManagerDelegate> _imagePickerDelegate;
    unsigned long long _galleryType;
    unsigned long long _defaultSelectTab;
    MMUIButton *_currentTitleButton;
    MMUIViewController *_currentTabVc;
    GameVideoAlbumController *_myVideoTabVc;
    UIView *_indicatorView;
    MMAssetPickerController *_albumViewController;
    UINavigationController *_albumControlCenter;
    MMUIButton *_albumTabBtn;
    MMUIButton *_gameVideoTabBtn;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInPreview; // @synthesize isInPreview=_isInPreview;
@property(retain, nonatomic) MMUIButton *gameVideoTabBtn; // @synthesize gameVideoTabBtn=_gameVideoTabBtn;
@property(retain, nonatomic) MMUIButton *albumTabBtn; // @synthesize albumTabBtn=_albumTabBtn;
@property(retain, nonatomic) UINavigationController *albumControlCenter; // @synthesize albumControlCenter=_albumControlCenter;
@property(retain, nonatomic) MMAssetPickerController *albumViewController; // @synthesize albumViewController=_albumViewController;
@property(retain, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) GameVideoAlbumController *myVideoTabVc; // @synthesize myVideoTabVc=_myVideoTabVc;
@property(retain, nonatomic) MMUIViewController *currentTabVc; // @synthesize currentTabVc=_currentTabVc;
@property(retain, nonatomic) MMUIButton *currentTitleButton; // @synthesize currentTitleButton=_currentTitleButton;
@property(nonatomic) unsigned long long defaultSelectTab; // @synthesize defaultSelectTab=_defaultSelectTab;
@property(nonatomic) _Bool ignoreVideoPreview; // @synthesize ignoreVideoPreview=_ignoreVideoPreview;
@property(nonatomic) unsigned long long galleryType; // @synthesize galleryType=_galleryType;
@property(nonatomic) __weak id <MMImagePickerManagerDelegate> imagePickerDelegate; // @synthesize imagePickerDelegate=_imagePickerDelegate;
@property(nonatomic) __weak id <GameVideoAlbumControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSelectFinish:(unsigned long long)arg1;
- (void)onImagePickerManagerCancelPreview;
- (void)onImagePickerManagerStartPreview;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidSkip:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithAsset:(id)arg2;
- (id)buildTrackEventProps:(CDUnknownBlockType)arg1;
- (id)reportObjWithPosition:(long long)arg1 action:(long long)arg2;
- (id)buildMyLocalVideoWithPosition:(long long)arg1 action:(long long)arg2;
- (id)buildReportWithUiarea:(long long)arg1 position:(long long)arg2 action:(long long)arg3;
- (id)buildReportWithCurrenTabPosition:(long long)arg1 action:(long long)arg2;
- (void)reportWithCurrenTabPosition:(long long)arg1 action:(long long)arg2;
- (void)trackEventExit;
- (void)onClose;
- (void)clickTitleRight:(id)arg1;
- (void)clickTitleLeft:(id)arg1;
- (void)initVideoAlbumViewController;
- (void)initAlbumViewController;
- (_Bool)useTransparentNavibar;
- (void)selectHaoWanTab:(unsigned long long)arg1;
- (void)determinDefaultSelectTab;
- (void)setupTitleButton;
- (void)configTabbuttonStyle:(id)arg1;
- (void)viewDidLoad;
- (id)initWithAlbumInfos:(id)arg1 imagePickerManagerOptionObj:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

