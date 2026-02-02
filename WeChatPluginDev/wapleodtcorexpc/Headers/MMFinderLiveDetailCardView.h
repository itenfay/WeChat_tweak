//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveDropGiftDetailCardViewModel, UIImageView;

@interface MMFinderLiveDetailCardView : UIView
{
    MMFinderLiveDropGiftDetailCardViewModel *_viewModel;
    UIImageView *_backgroundImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak MMFinderLiveDropGiftDetailCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)layoutSubviews;
- (void)setup;
- (void)updateViewModel:(id)arg1;
- (id)init;

@end

