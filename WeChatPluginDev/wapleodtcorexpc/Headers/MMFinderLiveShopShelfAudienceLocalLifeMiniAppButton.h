//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class MMPaddingView, UIImageView, UILabel;

@interface MMFinderLiveShopShelfAudienceLocalLifeMiniAppButton : UIButton
{
    MMPaddingView *_miniAppImageView;
    UILabel *_textLabel;
    UIImageView *_arrowView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) MMPaddingView *miniAppImageView; // @synthesize miniAppImageView=_miniAppImageView;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateStyleIsHightLighted:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateWithHeaderViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

