//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class MJActionPanelMainMenuView, MJMovieTextEditView, NSArray, NSString;
@protocol MJMovieTextTitleViewControllerDelegate;

@interface MJMovieTextTitleViewController : UIViewController
{
    _Bool _isAppearing;
    id <MJMovieTextTitleViewControllerDelegate> _delegate;
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
@property(nonatomic) __weak id <MJMovieTextTitleViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isAppearing; // @synthesize isAppearing=_isAppearing;
- (void)mainMenuView:(id)arg1 didSelectItem:(id)arg2;
- (void)movieTextEditViewDidSelectDelete:(id)arg1;
- (void)movieTextEditViewDidSelectEditText:(id)arg1;
- (void)movieTextEditViewDidChangeDisplayingText:(id)arg1;
- (void)updateOnIsPlayingDidChange:(_Bool)arg1;
- (void)updateOnPlaybackTimeDidChange:(CDStruct_1b6d18a9)arg1;
- (void)updateOnSkimTimeDidChange:(CDStruct_1b6d18a9)arg1;
- (void)resetPreview;
- (void)reloadData:(id)arg1;
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

