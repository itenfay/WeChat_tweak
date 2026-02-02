//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface ImageBrowseButton
{
    UIView *_roundBackView;
    UIView *_coverBackView;
    UIView *_selectedView;
    _Bool _isRound;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRound; // @synthesize isRound=_isRound;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

