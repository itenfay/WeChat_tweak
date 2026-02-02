//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMLiveColorfulLabel, MMUIButton, MMWebImageView, UIImageView, UIView, WCFinderLiveStreamContainerModel;
@protocol WCFinderLiveHomePageSectionHeaderViewDelegate;

@interface WCFinderLiveHomePageSectionHeaderView : UICollectionViewCell
{
    WCFinderLiveStreamContainerModel *_containerModel;
    id <WCFinderLiveHomePageSectionHeaderViewDelegate> _delegate;
    MMLiveColorfulLabel *_titleLabel;
    MMWebImageView *_iconImage;
    UIView *_verticalLineView;
    MMUIButton *_moreButton;
    UIImageView *_arrowView;
}

+ (id)cellIdentifier;
+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) MMUIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIView *verticalLineView; // @synthesize verticalLineView=_verticalLineView;
@property(retain, nonatomic) MMWebImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) MMLiveColorfulLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WCFinderLiveHomePageSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderLiveStreamContainerModel *containerModel; // @synthesize containerModel=_containerModel;
- (_Bool)showMoreButton;
- (void)onClickMore:(id)arg1;
- (void)updateTextColors:(id)arg1;
- (void)layoutUI;
- (void)setupUI;
- (void)updateWithContainerModel:(id)arg1 forceDarkMode:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;

@end

