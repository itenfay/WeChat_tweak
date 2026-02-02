//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel, UIView;

@interface WCFinderAccountSelectedButton
{
    UIImageView *_leftImageView;
    UILabel *_selectedLabel;
    UIView *_redDotView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(nonatomic) __weak UILabel *selectedLabel; // @synthesize selectedLabel=_selectedLabel;
@property(nonatomic) __weak UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (void)reloadLayout;
- (void)showRedDotView:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hasShowRedDot;
- (void)setUpUI;
- (id)init;

@end

