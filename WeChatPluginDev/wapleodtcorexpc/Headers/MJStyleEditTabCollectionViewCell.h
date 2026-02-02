//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUILabel;

@interface MJStyleEditTabCollectionViewCell : UICollectionViewCell
{
    _Bool _isSelected;
    MMUILabel *_textLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void)setupWithItem:(id)arg1;
- (void)prepareForReuse;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

