//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMScrollStack, UIStackView;

@interface MMAutoLayoutSheetView
{
    UIStackView *_contentView;
    MMScrollStack *_scrollStack;
    double _fixedHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double fixedHeight; // @synthesize fixedHeight=_fixedHeight;
@property(retain, nonatomic) MMScrollStack *scrollStack; // @synthesize scrollStack=_scrollStack;
@property(retain, nonatomic) UIStackView *contentView; // @synthesize contentView=_contentView;
- (void)appendView:(id)arg1 withNextSpace:(double)arg2;
- (void)setContentMargin:(struct UIEdgeInsets)arg1;
- (void)layoutSubviews;
- (void)customArrangeViews;
- (void)pageSheetDidRotation;
- (void)didPushSelfInPage:(id)arg1;
- (void)showFromViewController:(id)arg1 animated:(_Bool)arg2;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (void)showWithAnimated:(_Bool)arg1;
- (void)updateContentViewHeight;
- (void)setPageDetailView;
- (void)initStackView;
- (void)initPageSheet;
- (id)init;

@end

