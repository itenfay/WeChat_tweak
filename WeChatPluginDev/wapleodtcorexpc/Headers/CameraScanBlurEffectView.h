//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface CameraScanBlurEffectView : UIView
{
    UIImageView *_topImageView;
    UIImageView *_bottomImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *bottomImageView; // @synthesize bottomImageView=_bottomImageView;
@property(retain, nonatomic) UIImageView *topImageView; // @synthesize topImageView=_topImageView;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)init;

@end

