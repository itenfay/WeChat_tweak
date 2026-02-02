//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, UILabel, WAProfileEasyBuyIconViewModel;

@interface WAProfileEasyBuyIconView : UIView
{
    WAProfileEasyBuyIconViewModel *_viewModel;
    MMWebImageView *_imageView;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) WAProfileEasyBuyIconViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

