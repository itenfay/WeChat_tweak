//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BizPersonalCenterRecentReadCover, MMUILabel, MMUIView, UIView;

@interface BizRecentReadSmallItemCellView
{
    MMUILabel *_titleLabel;
    MMUILabel *_nicknameLabel;
    MMUIView *_seperateView;
    BizPersonalCenterRecentReadCover *_cellCoverView;
    UIView *_highlightMaskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightMaskView; // @synthesize highlightMaskView=_highlightMaskView;
@property(retain, nonatomic) BizPersonalCenterRecentReadCover *cellCoverView; // @synthesize cellCoverView=_cellCoverView;
@property(retain, nonatomic) MMUIView *seperateView; // @synthesize seperateView=_seperateView;
@property(retain, nonatomic) MMUILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)applyData:(id)arg1;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)configureLayout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

