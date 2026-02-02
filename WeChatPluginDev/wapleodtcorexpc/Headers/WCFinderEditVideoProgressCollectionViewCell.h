//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, WCFinderAnimationLoadingView;

@interface WCFinderEditVideoProgressCollectionViewCell : UICollectionViewCell
{
    UIImageView *_imageView;
    WCFinderAnimationLoadingView *_loadingView;
}

+ (id)cellID;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)updateWithImage:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

