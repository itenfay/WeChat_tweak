//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, NSString, UIImageView, UILabel;

@interface MJVoiceLabel : UIView
{
    UILabel *_label;
    UIImageView *_iconView;
    MMUIActivityIndicatorView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)hideLoading;
- (void)showLoading;
@property(retain, nonatomic) NSString *text;
- (id)initWithFrame:(struct CGRect)arg1;

@end

