//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UIView;

@interface MMAuthorizeGameInfoHalfScreenTableCell
{
    UIImageView *_selectImageView;
    UIView *_highlightMaskView;
    UIView *_topSeperatorLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *topSeperatorLine; // @synthesize topSeperatorLine=_topSeperatorLine;
@property(retain, nonatomic) UIView *highlightMaskView; // @synthesize highlightMaskView=_highlightMaskView;
@property(retain, nonatomic) UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setupHighlightMask;
- (void)setupSelectedImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

