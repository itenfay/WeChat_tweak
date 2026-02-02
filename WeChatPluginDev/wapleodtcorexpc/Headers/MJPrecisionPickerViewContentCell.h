//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface MJPrecisionPickerViewContentCell : UICollectionViewCell
{
    UIView *_pickerContentView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *pickerContentView; // @synthesize pickerContentView=_pickerContentView;
- (void)configPickerContentView:(id)arg1 withSize:(struct CGSize)arg2;
- (void)prepareForReuse;

@end

