//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class MJActionPanelMainMenuView, MJMovieTextEditView, NSArray, NSString, UICollectionView;
@protocol MJMovieTextContentDescViewControllerDelegate;

@interface MJMovieTextContentDescViewController : UIViewController
{
    _Bool _isAppearing;
    id <MJMovieTextContentDescViewControllerDelegate> _delegate;
    UICollectionView *_thumbnailView;
    MJMovieTextEditView *_editView;
    MJActionPanelMainMenuView *_menuView;
    NSArray *_menuItems;
    NSArray *_menuItemsDisabled;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *menuItemsDisabled; // @synthesize menuItemsDisabled=_menuItemsDisabled;
@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(retain, nonatomic) MJActionPanelMainMenuView *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) MJMovieTextEditView *editView; // @synthesize editView=_editView;
@property(retain, nonatomic) UICollectionView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(nonatomic) __weak id <MJMovieTextContentDescViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isAppearing; // @synthesize isAppearing=_isAppearing;
- (void)scrollThumbnailToTime:(CDStruct_1b6d18a9)arg1 animated:(_Bool)arg2 showHandleBox:(_Bool)arg3;
- (void)updateOnIsPlayingDidChange:(_Bool)arg1;
- (void)updateOnPlaybackTimeDidChange:(CDStruct_1b6d18a9)arg1;
- (void)updateOnSkimTimeDidChange:(CDStruct_1b6d18a9)arg1;
- (void)reloadData:(id)arg1;
- (void)resetPreview;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)mainMenuView:(id)arg1 didSelectItem:(id)arg2;
- (void)movieTextEditViewDidSelectDelete:(id)arg1;
- (void)movieTextEditViewDidSelectEditText:(id)arg1;
- (void)movieTextEditViewDidChangeDisplayingText:(id)arg1;
- (void)layoutViews;
- (void)setupViews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

