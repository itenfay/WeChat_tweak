//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel;

@interface MJMovieTextSuggestionViewCell : UICollectionViewCell
{
    _Bool _isEnabledViewerNumberLabel;
    UILabel *_titleLabel;
    UILabel *_viewerNumberLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *viewerNumberLabel; // @synthesize viewerNumberLabel=_viewerNumberLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isEnabledViewerNumberLabel; // @synthesize isEnabledViewerNumberLabel=_isEnabledViewerNumberLabel;
- (void)updateLayoutWithItem:(id)arg1;
- (void)setupWithItem:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

