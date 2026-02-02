//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUIImageView, MMUILabel, MMUIView;

@interface MJShootVisagePanelCollectionViewCell : UICollectionViewCell
{
    MMUIImageView *_iconImageView;
    MMUIView *_iconContainerView;
    MMUILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
@property(retain, nonatomic) MMUIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)reset;
- (void)prepareForReuse;
- (void)setupWithItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

