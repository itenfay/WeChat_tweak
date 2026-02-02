//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUIButton, UILabel, UIView, WCFinderCarouselView;
@protocol WCFinderCarouseDelegate, WCFinderCarouselDatasource, WCFinderMusicVideoContentViewDelegate;

@interface WCFinderMusicVideoContentView : UICollectionViewCell
{
    _Bool _hiddenTopTitle;
    WCFinderCarouselView *_carouselView;
    id <WCFinderMusicVideoContentViewDelegate> _delegate;
    id <WCFinderCarouseDelegate> _carouselDelegate;
    id <WCFinderCarouselDatasource> _carouselDataSource;
    MMUIButton *_allBtn;
    UIView *_topContentView;
    UILabel *_titleLabel;
}

+ (id)reuseIdentifier;
+ (double)musicTabContentViewHeightFromWidth:(double)arg1;
+ (double)musicVideoContentViewHeightFromWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topContentView; // @synthesize topContentView=_topContentView;
@property(nonatomic) _Bool hiddenTopTitle; // @synthesize hiddenTopTitle=_hiddenTopTitle;
@property(retain, nonatomic) MMUIButton *allBtn; // @synthesize allBtn=_allBtn;
@property(nonatomic) __weak id <WCFinderCarouselDatasource> carouselDataSource; // @synthesize carouselDataSource=_carouselDataSource;
@property(nonatomic) __weak id <WCFinderCarouseDelegate> carouselDelegate; // @synthesize carouselDelegate=_carouselDelegate;
@property(nonatomic) __weak id <WCFinderMusicVideoContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderCarouselView *carouselView; // @synthesize carouselView=_carouselView;
- (void)refreshView;
- (void)onClickAllBtn;
- (id)createFlowLayout;
- (void)showMoreBtn:(_Bool)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

