//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUIButton, MMWebImageView, NSString, UIImageView, UILabel, UIView, WCFinderExpandHitTingPlayerContoller, WCFinderFeedContentVM, WCFinderLinearView;
@protocol WCFinderStreamProfileMusicCellDelegate;

@interface WCFinderStreamProfileMusicCell : UICollectionViewCell
{
    WCFinderExpandHitTingPlayerContoller *_playButton;
    id <WCFinderStreamProfileMusicCellDelegate> _delegate;
    UIView *_cellAccessibilityView;
    UIView *_avatarContainer;
    UIView *_avatarMask;
    UIImageView *_defaultMusicIcon;
    MMWebImageView *_musicIconView;
    UIView *_playButtonBGView;
    MMUIButton *_starButton;
    WCFinderLinearView *_titleCintainer;
    UILabel *_titleLabel;
    UILabel *_musicLengthLabel;
    UILabel *_descLabel;
    UIView *_line;
    WCFinderFeedContentVM *_contentVM;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *musicLengthLabel; // @synthesize musicLengthLabel=_musicLengthLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCFinderLinearView *titleCintainer; // @synthesize titleCintainer=_titleCintainer;
@property(retain, nonatomic) MMUIButton *starButton; // @synthesize starButton=_starButton;
@property(retain, nonatomic) UIView *playButtonBGView; // @synthesize playButtonBGView=_playButtonBGView;
@property(retain, nonatomic) MMWebImageView *musicIconView; // @synthesize musicIconView=_musicIconView;
@property(retain, nonatomic) UIImageView *defaultMusicIcon; // @synthesize defaultMusicIcon=_defaultMusicIcon;
@property(retain, nonatomic) UIView *avatarMask; // @synthesize avatarMask=_avatarMask;
@property(retain, nonatomic) UIView *avatarContainer; // @synthesize avatarContainer=_avatarContainer;
@property(retain, nonatomic) UIView *cellAccessibilityView; // @synthesize cellAccessibilityView=_cellAccessibilityView;
@property(nonatomic) __weak id <WCFinderStreamProfileMusicCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderExpandHitTingPlayerContoller *playButton; // @synthesize playButton=_playButton;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (void)onClickStarButton;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(_Bool)arg3;
- (void)playClicked:(id)arg1;
- (id)thumbImage;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)doLayout;
- (id)formatTimeString:(long long)arg1;
- (void)updateWithContentVM:(id)arg1;
- (void *)observeImageContextKey;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

