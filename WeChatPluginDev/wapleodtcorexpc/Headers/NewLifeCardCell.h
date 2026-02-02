//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NewLifeCardView;

@interface NewLifeCardCell : UICollectionViewCell
{
    NewLifeCardView *_cardView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NewLifeCardView *cardView; // @synthesize cardView=_cardView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

