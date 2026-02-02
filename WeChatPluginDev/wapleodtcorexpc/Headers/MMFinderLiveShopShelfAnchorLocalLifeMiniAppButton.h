//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class MMPaddingView, UIImageView, UILabel;

@interface MMFinderLiveShopShelfAnchorLocalLifeMiniAppButton : UIButton
{
    MMPaddingView *_miniAppImageView;
    UILabel *_nameLabel;
    UILabel *_jumpLabel;
    UIImageView *_arrowView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *jumpLabel; // @synthesize jumpLabel=_jumpLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMPaddingView *miniAppImageView; // @synthesize miniAppImageView=_miniAppImageView;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateStyleIsHightLighted:(_Bool)arg1;
- (id)accessibilityLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateWithHeaderViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

