//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MultipleTextStateCardView;

@interface MultipleTextStateCardCollectionCell : UICollectionViewCell
{
    MultipleTextStateCardView *_multipleCardView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MultipleTextStateCardView *multipleCardView; // @synthesize multipleCardView=_multipleCardView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

