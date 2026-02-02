//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMPaddingView, MMWebImageView, NSString, UILabel, UIView;

@interface MMFinderLiveGoodsSKUCell : UICollectionViewCell
{
    _Bool _isSellOut;
    UIView *_sellOutMaskView;
    UIView *_pressedMaskView;
    MMPaddingView *_sellOutLabel;
    UILabel *_textLabel;
    MMWebImageView *_imageView;
}

+ (unsigned long long)numberOfLinesWithImageForText:(id)arg1;
+ (double)widthWithImage;
+ (id)textFont;
+ (struct CGSize)cellWithImageSizeWithMaxNumberOfLines:(unsigned long long)arg1;
+ (struct CGSize)cellWithoutImageSizeForText:(id)arg1;
+ (double)cellHeightWithoutImageSize;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) MMPaddingView *sellOutLabel; // @synthesize sellOutLabel=_sellOutLabel;
@property(retain, nonatomic) UIView *pressedMaskView; // @synthesize pressedMaskView=_pressedMaskView;
@property(retain, nonatomic) UIView *sellOutMaskView; // @synthesize sellOutMaskView=_sellOutMaskView;
@property(nonatomic) _Bool isSellOut; // @synthesize isSellOut=_isSellOut;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
@property(nonatomic) unsigned long long numberOfLines;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSString *imageURL;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

