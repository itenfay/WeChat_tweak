//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class MMListenCategoryItem, MMUILabel, NSString, TingSharePlayButton, UIImageView, UIView;

@interface TingSharedAudioView : UIControl
{
    _Bool _ignoreTouchesExceptPlayButton;
    UIImageView *_imageView;
    MMUILabel *_titleLabel;
    MMUILabel *_subtitleLabel;
    TingSharePlayButton *_playButton;
    MMListenCategoryItem *_categoryItem;
    UIView *_contentView;
    UIView *_highlightedMaskView;
    UIImageView *_arrowView;
}

+ (struct CGSize)cardSizeForMoment;
+ (struct CGSize)cardSizeForChat;
+ (double)cardHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIView *highlightedMaskView; // @synthesize highlightedMaskView=_highlightedMaskView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool ignoreTouchesExceptPlayButton; // @synthesize ignoreTouchesExceptPlayButton=_ignoreTouchesExceptPlayButton;
@property(retain, nonatomic) MMListenCategoryItem *categoryItem; // @synthesize categoryItem=_categoryItem;
@property(retain, nonatomic) TingSharePlayButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)_updateTitle:(id)arg1 subtitle:(id)arg2 isMusic:(_Bool)arg3;
- (void)updateTitle:(id)arg1 subtitle:(id)arg2 isMusic:(_Bool)arg3;
- (void)updateThumbnail:(id)arg1;
- (void)reloadTingItemCover;
- (void)updateTextAndLayoutWith:(id)arg1;
- (void)updateDisplayWith:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureLayout;
- (id)initWithFrame:(struct CGRect)arg1;
- (int)fontModule;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

