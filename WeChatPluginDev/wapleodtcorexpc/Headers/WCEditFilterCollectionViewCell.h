//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImage, UIImageView, UILabel, UIView;

@interface WCEditFilterCollectionViewCell : UICollectionViewCell
{
    UIImage *_filterImage;
    NSString *_filterName;
    UIImageView *_filterImageView;
    UIView *_maskView;
    UIImageView *_toolView;
    UILabel *_filterNameLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *filterNameLabel; // @synthesize filterNameLabel=_filterNameLabel;
@property(retain, nonatomic) UIImageView *toolView; // @synthesize toolView=_toolView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *filterImageView; // @synthesize filterImageView=_filterImageView;
@property(copy, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
@property(retain, nonatomic) UIImage *filterImage; // @synthesize filterImage=_filterImage;
- (void)showMaskView:(_Bool)arg1 toolView:(_Bool)arg2;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

