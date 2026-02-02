//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, WCFinderDyeWebImageView;

@interface WCFinderProfileServiceCollectionViewCell : UICollectionViewCell
{
    WCFinderDyeWebImageView *_imageView;
    UILabel *_label;
    UIImageView *_tailIcon;
    CDUnknownBlockType _tailIconObserver;
}

+ (struct CGSize)tailIconSizeFromJumpInfo:(id)arg1;
+ (struct CGSize)sizeThatFitForJumpInfo:(id)arg1;
+ (struct CGSize)displaySizeInContainerSize:(struct CGSize)arg1 itemPadding:(double)arg2 lineElementCount:(long long)arg3;
+ (_Bool)hasEnoughMarginWithJumpInfo:(id)arg1 maxWidth:(double)arg2;
+ (id)jumpInfoTailIcon:(id)arg1;
+ (struct CGSize)calculateDisplaySize:(struct CGSize)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType tailIconObserver; // @synthesize tailIconObserver=_tailIconObserver;
@property(retain, nonatomic) UIImageView *tailIcon; // @synthesize tailIcon=_tailIcon;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) WCFinderDyeWebImageView *imageView; // @synthesize imageView=_imageView;
- (void)addTailIconObserver:(CDUnknownBlockType)arg1;
- (void)updateMargin;
- (void)updateWithFinderJumpInfo:(id)arg1 themeColor:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

