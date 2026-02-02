//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class TingCategoryCoverView, UIImageView, UILabel;

@interface WCFinderProfilePlaylistItemCell : UICollectionViewCell
{
    _Bool _firstColumn;
    _Bool _isAuthor;
    id _model;
    CDUnknownFunctionPointerType _updater;
    TingCategoryCoverView *_coverView;
    UIImageView *_normalCoverView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIImageView *_playInfoIconView;
    UILabel *_playInfoLabel;
    struct CGSize _cacheSize;
}

+ (double)displayHeight:(double)arg1 firstColumn:(_Bool)arg2 showPlayInfo:(_Bool)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *playInfoLabel; // @synthesize playInfoLabel=_playInfoLabel;
@property(retain, nonatomic) UIImageView *playInfoIconView; // @synthesize playInfoIconView=_playInfoIconView;
@property(nonatomic) struct CGSize cacheSize; // @synthesize cacheSize=_cacheSize;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *normalCoverView; // @synthesize normalCoverView=_normalCoverView;
@property(retain, nonatomic) TingCategoryCoverView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) CDUnknownFunctionPointerType updater; // @synthesize updater=_updater;
@property(retain, nonatomic) id model; // @synthesize model=_model;
@property(nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
@property(nonatomic) _Bool firstColumn; // @synthesize firstColumn=_firstColumn;
- (void)layoutSubviews;
- (void)doLayout;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

