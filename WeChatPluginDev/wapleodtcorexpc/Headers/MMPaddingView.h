//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface MMPaddingView : UIView
{
    UIView *_child;
    struct UIEdgeInsets _padding;
}

+ (id)Padding:(struct UIEdgeInsets)arg1 child:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *child; // @synthesize child=_child;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (id)initWithPadding:(struct UIEdgeInsets)arg1 child:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

