//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUILabel;

@interface SightShootingModeSwitchCollectionViewCell : UICollectionViewCell
{
    MMUILabel *_titleLabel;
}

+ (double)cellH;
+ (id)genLabel;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

