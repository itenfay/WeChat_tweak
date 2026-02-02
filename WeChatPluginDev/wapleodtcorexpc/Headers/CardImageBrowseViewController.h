//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ImageBrowseButton, MMImageActionSheet, MultiImageScrollView, NSMutableArray, NSString, UIPageControl;
@protocol CardImageBrowseViewControllerDelegate;

@interface CardImageBrowseViewController
{
    unsigned int _startIndex;
    NSMutableArray *_imageList;
    id <CardImageBrowseViewControllerDelegate> _delegate;
    MMImageActionSheet *_imageActionSheet;
    MultiImageScrollView *_multiImageScrollView;
    ImageBrowseButton *_saveButton;
    ImageBrowseButton *_favButton;
    ImageBrowseButton *_deleteButton;
    UIPageControl *_pageCtrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPageControl *pageCtrl; // @synthesize pageCtrl=_pageCtrl;
@property(retain, nonatomic) ImageBrowseButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) ImageBrowseButton *favButton; // @synthesize favButton=_favButton;
@property(retain, nonatomic) ImageBrowseButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) MultiImageScrollView *multiImageScrollView; // @synthesize multiImageScrollView=_multiImageScrollView;
@property(retain, nonatomic) MMImageActionSheet *imageActionSheet; // @synthesize imageActionSheet=_imageActionSheet;
@property(nonatomic) __weak id <CardImageBrowseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int startIndex; // @synthesize startIndex=_startIndex;
@property(retain, nonatomic) NSMutableArray *imageList; // @synthesize imageList=_imageList;
- (id)customItemsArrayForImageActionSheet:(id)arg1;
- (_Bool)imageActionSheet:(id)arg1 itemDidCustomEvent:(id)arg2;
- (void)imageActionSheet:(id)arg1 itemWillClicked:(id)arg2;
- (void)onChangePage;
- (void)OnLongPressBegin:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (id)imageAtPage:(unsigned int)arg1;
- (id)currentImage;
- (void)deleteCardImage;
- (void)addFavItem;
- (void)savePhotoToAlbum;
- (void)onTapDelete;
- (void)viewWillBeInteractivePoped;
- (void)showVCAnimation;
- (void)hideVCAnimation;
- (_Bool)removeFromViewAfterTransition;
- (long long)overrideUserInterfaceStyle;
- (_Bool)useTransparentNavibar;
- (_Bool)shouldInteractivePop;
- (_Bool)shouldHideNavigationBar;
- (void)resetToolView;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

