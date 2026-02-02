//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageAttr, MMAsset, NSMutableArray, NSString, RecommendedMusicInfo, UIImage, UIView, WCEditImageLayoutView, WCEditViewControllerUIConfig;
@protocol WCEditImageViewControllerDelegate;

@interface WCEditImageViewController
{
    _Bool _isEmoticonBoardSearchEnabled;
    unsigned long long _fromScene;
    unsigned long long _entranceScene;
    unsigned long long _editImageUIStyle;
    WCEditImageLayoutView *_editImageLayoutView;
    id <WCEditImageViewControllerDelegate> _delegate;
    NSMutableArray *_assets;
    NSMutableArray *_images;
    UIImage *_image;
    MMAsset *_asset;
    RecommendedMusicInfo *_patMusicInfo;
    unsigned long long _backStyle;
    WCEditViewControllerUIConfig *_uiConfig;
    UIView *_tempView;
    EditImageAttr *_editImageAttr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EditImageAttr *editImageAttr; // @synthesize editImageAttr=_editImageAttr;
@property(retain, nonatomic) UIView *tempView; // @synthesize tempView=_tempView;
@property(nonatomic) _Bool isEmoticonBoardSearchEnabled; // @synthesize isEmoticonBoardSearchEnabled=_isEmoticonBoardSearchEnabled;
@property(retain, nonatomic) WCEditViewControllerUIConfig *uiConfig; // @synthesize uiConfig=_uiConfig;
@property(nonatomic) unsigned long long backStyle; // @synthesize backStyle=_backStyle;
@property(retain, nonatomic) RecommendedMusicInfo *patMusicInfo; // @synthesize patMusicInfo=_patMusicInfo;
@property(retain, nonatomic) MMAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
@property(nonatomic) __weak id <WCEditImageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCEditImageLayoutView *editImageLayoutView; // @synthesize editImageLayoutView=_editImageLayoutView;
@property(nonatomic) unsigned long long editImageUIStyle; // @synthesize editImageUIStyle=_editImageUIStyle;
@property(nonatomic) unsigned long long entranceScene; // @synthesize entranceScene=_entranceScene;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
- (void)onEditImageChooseVideoBGMDone:(id)arg1;
- (void)debugTap;
- (void)asyncFetchAssetExifAt:(long long)arg1 storeTo:(id)arg2 finish:(CDUnknownBlockType)arg3;
- (void)asyncFetchAssetExifs:(CDUnknownBlockType)arg1;
- (_Bool)shouldSaveUnCropImages;
- (id)currentViewController;
- (void)OnClickEditImageDoneBarButton;
- (void)OnClickEditImageBackBarButton;
- (void)getOriginalImage:(CDUnknownBlockType)arg1;
- (void)getDisplayImage:(CDUnknownBlockType)arg1;
- (void)updateImage:(id)arg1;
- (void)showEditImageViewOn;
- (_Bool)hidesStatusBar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithAssets:(id)arg1 images:(id)arg2 editImageAttr:(id)arg3;
- (id)initWithImage:(id)arg1 editImageAttr:(id)arg2;
- (id)initWithAssets:(id)arg1 images:(id)arg2 tempView:(id)arg3;
- (id)initWithAsset:(id)arg1 tempView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

