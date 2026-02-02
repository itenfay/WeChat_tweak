//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAssetPickerController, MMImagePickerManagerOptionObj, MMSightCameraViewController, MMUIButton, NSString, UINavigationController, UIView, UIViewController, WCAlbumPickViewController;
@protocol NewLifeImagePickViewControllerDelegate;

@interface NewLifeImagePickViewController
{
    id <NewLifeImagePickViewControllerDelegate> _delegate;
    unsigned long long _limitCount;
    unsigned long long _initSelectTabIndex;
    UIView *_tabView;
    MMUIButton *_currentTabBtn;
    UIViewController *_currentTabVc;
    MMUIButton *_albumTabBtn;
    MMUIButton *_timelineBtn;
    MMUIButton *_sightTabBtn;
    MMImagePickerManagerOptionObj *_optionObj;
    UINavigationController *_albumViewController;
    MMAssetPickerController *_assetPickViewController;
    UINavigationController *_timelineViewController;
    WCAlbumPickViewController *_timelineAlbumViewController;
    MMSightCameraViewController *_sightViewController;
    unsigned long long _selectTimelinePhotoCount;
    unsigned long long _isEnterSubView;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long isEnterSubView; // @synthesize isEnterSubView=_isEnterSubView;
@property(nonatomic) unsigned long long selectTimelinePhotoCount; // @synthesize selectTimelinePhotoCount=_selectTimelinePhotoCount;
@property(retain, nonatomic) MMSightCameraViewController *sightViewController; // @synthesize sightViewController=_sightViewController;
@property(retain, nonatomic) WCAlbumPickViewController *timelineAlbumViewController; // @synthesize timelineAlbumViewController=_timelineAlbumViewController;
@property(retain, nonatomic) UINavigationController *timelineViewController; // @synthesize timelineViewController=_timelineViewController;
@property(retain, nonatomic) MMAssetPickerController *assetPickViewController; // @synthesize assetPickViewController=_assetPickViewController;
@property(retain, nonatomic) UINavigationController *albumViewController; // @synthesize albumViewController=_albumViewController;
@property(retain, nonatomic) MMImagePickerManagerOptionObj *optionObj; // @synthesize optionObj=_optionObj;
@property(retain, nonatomic) MMUIButton *sightTabBtn; // @synthesize sightTabBtn=_sightTabBtn;
@property(retain, nonatomic) MMUIButton *timelineBtn; // @synthesize timelineBtn=_timelineBtn;
@property(retain, nonatomic) MMUIButton *albumTabBtn; // @synthesize albumTabBtn=_albumTabBtn;
@property(retain, nonatomic) UIViewController *currentTabVc; // @synthesize currentTabVc=_currentTabVc;
@property(retain, nonatomic) MMUIButton *currentTabBtn; // @synthesize currentTabBtn=_currentTabBtn;
@property(retain, nonatomic) UIView *tabView; // @synthesize tabView=_tabView;
@property(nonatomic) unsigned long long initSelectTabIndex; // @synthesize initSelectTabIndex=_initSelectTabIndex;
@property(nonatomic) unsigned long long limitCount; // @synthesize limitCount=_limitCount;
@property(nonatomic) __weak id <NewLifeImagePickViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateTabBar;
- (void)onSightCameraViewControllerEndEditing;
- (void)onSightCameraViewControllerStartEditing;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onAssetPickerControllerChangeSelectInfo:(id)arg1 index:(long long)arg2;
- (void)onJumpCustomEditViewController:(id)arg1;
- (void)onSelectionItemNumberChanged:(unsigned long long)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)jumpToEditorWithLocalPaths:(id)arg1;
- (void)jumpToEditorWithAssets:(id)arg1;
- (void)onTapSightTabBtn;
- (void)onTapTimelineBtn;
- (void)onTapAlbumTabBtn;
- (void)MMUIViewControllerWillPopOrDismiss:(id)arg1;
- (void)MMUIViewControllerWillPushOrPresent:(id)arg1;
- (_Bool)isSingleSelection;
- (void)updateLayout;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initSelectFirstTab;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

