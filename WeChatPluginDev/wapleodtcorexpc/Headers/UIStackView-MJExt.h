//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIStackView.h>

@interface UIStackView (MJExt)
- (void)mj_removeAllArrangedSubviews;
- (id)appendSeparatorWithStartPadding:(double)arg1 endPadding:(double)arg2 atIndex:(unsigned long long)arg3;
- (id)appendSeparatorWithStartPadding:(double)arg1 endPadding:(double)arg2;
- (void)appendSeparatorWithEndPadding:(double)arg1;
- (void)appendSeparatorWithStartPadding:(double)arg1;
- (void)appendSeparator;
- (void)appendView:(id)arg1 withNextSpace:(double)arg2;
- (id)appendLabel:(id)arg1 textStyle:(unsigned long long)arg2 withNextSpace:(double)arg3;
- (id)appendHalfPageTextLabel:(id)arg1 withNextSpace:(double)arg2;
- (id)appendTextLabel:(id)arg1 withNextSpace:(double)arg2;
- (id)appendEmTitleLabel:(id)arg1 withNextSpace:(double)arg2;
- (id)appendHeadLineLabel:(id)arg1 withNextSpace:(double)arg2;
- (void)appendSpaceView:(double)arg1;
- (void)appendSpace:(double)arg1;
- (double)calHeightWithFixedWidth:(double)arg1;
- (void)setSizeWithFixedWidth:(double)arg1;
- (void)setActiveLayoutMargins:(struct UIEdgeInsets)arg1;
- (id)backgroundView;
@end

