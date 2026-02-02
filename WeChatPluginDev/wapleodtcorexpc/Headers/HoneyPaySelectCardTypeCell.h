//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface HoneyPaySelectCardTypeCell
{
    UIView *_highlightView;
    double _highlightViewCornerRadius;
    struct CGRect _highlightViewFrame;
}

- (void).cxx_destruct;
@property(nonatomic) double highlightViewCornerRadius; // @synthesize highlightViewCornerRadius=_highlightViewCornerRadius;
@property(nonatomic) struct CGRect highlightViewFrame; // @synthesize highlightViewFrame=_highlightViewFrame;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateHighlightView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

