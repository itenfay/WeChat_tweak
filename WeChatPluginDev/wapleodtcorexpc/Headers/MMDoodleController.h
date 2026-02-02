//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EditImageScrollView, MMDoodlePenView, MMDoodleToolbar, NSString, UIView, UIViewController;
@protocol MMDoodleDataSource, MMDoodleDelegate, MMDoodleViewControllerLayout;

@interface MMDoodleController : NSObject
{
    UIViewController<MMDoodleViewControllerLayout> *_viewControllerForLayout;
    MMDoodleToolbar *_toolbar;
    id <MMDoodleDelegate> _delegate;
    id <MMDoodleDataSource> _dataSource;
    EditImageScrollView *_contentScrollView;
    MMDoodlePenView *_penView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMDoodlePenView *penView; // @synthesize penView=_penView;
@property(retain, nonatomic) EditImageScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(nonatomic) __weak id <MMDoodleDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <MMDoodleDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMDoodleToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) __weak UIViewController<MMDoodleViewControllerLayout> *viewControllerForLayout; // @synthesize viewControllerForLayout=_viewControllerForLayout;
- (void)onClosePenToolAttrView;
- (void)undoPenEditImage;
- (void)setSelectedColorFromGradientBar:(id)arg1;
- (void)doodleToolbar:(id)arg1 penItemDidClick:(id)arg2;
- (struct CGRect)getAssetPreviewFrame;
- (void)onTapGesture;
- (void)onAddRealNewMainTextWidget;
- (void)onAddNewPOIWidget;
- (void)editImageViewPOIWidgetHiddenStateChange:(_Bool)arg1;
- (void)editImageViewLyricsWidgetHadBeenDoubleTap;
- (void)editImageViewLyricsWidgetHadBeenDeleted;
- (void)dragaAndDropWidget;
- (void)editImageViewdidEndDraw;
- (void)editImageViewDidStartDraw;
- (void)removeToolbarItem:(id)arg1;
- (void)addToolbarItem:(id)arg1;
- (void)undoAllPenEdit;
- (void)undoLastPenEdit;
- (void)refreshUndoPenButton;
- (void)hidePenView;
- (void)showPenView;
- (void)layoutPenView;
- (void)loadPenViewIfNeeded;
- (void)stopDoodling;
- (void)startDoodling;
- (void)startDoodlingIfNeeded;
@property(readonly, nonatomic) _Bool isDoodling;
- (void)layoutToolbar;
- (void)loadToolbarIfNeeded;
- (void)reloadContentScrollViewWithImage:(id)arg1;
- (void)layoutContentScrollView;
- (void)unloadContentScrollView;
- (void)loadContentScrollView;
- (void)setToolsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setToolsHidden:(_Bool)arg1;
- (void)layoutSubviewsForTools;
- (void)layoutSubviewsForContent;
- (void)loadSubviewsForTools;
@property(readonly, nonatomic) UIView *toolsContainerView;
@property(readonly, nonatomic) UIView *contentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

