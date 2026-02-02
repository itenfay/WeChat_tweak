//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, SightIconView, UIImageView, UILabel, UIView, WCContentItemCardViewModel;

@interface WCContentItemCardView
{
    WCContentItemCardViewModel *_viewModel;
    SightIconView *_playIconView;
    MMWebImageView *_contentImageView;
    UIImageView *_picIconView;
    MMWebImageView *_headImageView;
    UILabel *_nameLabel;
    UILabel *_durationLabel;
    UIView *_hlView;
    UIImageView *_bottomBkgView;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *bottomBkgView; // @synthesize bottomBkgView=_bottomBkgView;
@property(retain, nonatomic) UIView *hlView; // @synthesize hlView=_hlView;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIImageView *picIconView; // @synthesize picIconView=_picIconView;
@property(retain, nonatomic) MMWebImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) WCContentItemCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)onSelectMenuFavoritesAdd;
- (void)onLongTouch;
- (unsigned long long)menuItemBitFlag;
- (void)hideMenu;
- (void)layoutCardStyle;
- (void)layoutPureText;
- (void)layoutDefault;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)initViewsWithWCDataItem:(id)arg1;

@end

