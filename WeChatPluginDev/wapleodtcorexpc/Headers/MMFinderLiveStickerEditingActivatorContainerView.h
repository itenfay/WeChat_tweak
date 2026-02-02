//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveStickerEditingActivatorView, MMFinderLiveStickerItemBase, UIViewController;
@protocol MMFinderLiveStickerEditingActivatorContainerViewDelegate, MMFinderLiveStickerReporting;

@interface MMFinderLiveStickerEditingActivatorContainerView : UIView
{
    id <MMFinderLiveStickerEditingActivatorContainerViewDelegate> _delegate;
    UIViewController *_editingVcPresentingViewController;
    UIView *_actionSheetHostingView;
    id <MMFinderLiveStickerReporting> _reporter;
    MMFinderLiveStickerItemBase *_imageSticker;
    MMFinderLiveStickerEditingActivatorView *_imageStickerActivatorView;
    MMFinderLiveStickerItemBase *_textSticker;
    MMFinderLiveStickerEditingActivatorView *_textStickerActivatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveStickerEditingActivatorView *textStickerActivatorView; // @synthesize textStickerActivatorView=_textStickerActivatorView;
@property(retain, nonatomic) MMFinderLiveStickerItemBase *textSticker; // @synthesize textSticker=_textSticker;
@property(retain, nonatomic) MMFinderLiveStickerEditingActivatorView *imageStickerActivatorView; // @synthesize imageStickerActivatorView=_imageStickerActivatorView;
@property(retain, nonatomic) MMFinderLiveStickerItemBase *imageSticker; // @synthesize imageSticker=_imageSticker;
@property(retain, nonatomic) id <MMFinderLiveStickerReporting> reporter; // @synthesize reporter=_reporter;
@property(nonatomic) __weak UIView *actionSheetHostingView; // @synthesize actionSheetHostingView=_actionSheetHostingView;
@property(nonatomic) __weak UIViewController *editingVcPresentingViewController; // @synthesize editingVcPresentingViewController=_editingVcPresentingViewController;
@property(nonatomic) __weak id <MMFinderLiveStickerEditingActivatorContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onActivatorViewDoubleTapped:(id)arg1;
- (void)onActivatorViewTapped:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)sendStickerItemToBack:(id)arg1;
- (void)removeStickerItem:(id)arg1;
- (void)upsertStickerItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

