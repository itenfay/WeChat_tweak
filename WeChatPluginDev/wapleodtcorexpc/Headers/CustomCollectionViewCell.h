//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel;

@interface CustomCollectionViewCell : UICollectionViewCell
{
    _Bool _selected;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

