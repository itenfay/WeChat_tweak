//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandProfileMsgBaseViewModel, UIView;
@protocol BrandProfileMsgCellDelegate;

@interface BrandProfileMsgBaseCell
{
    _Bool _isDisplaying;
    UIView *_highlightMaskView;
    BrandProfileMsgBaseViewModel *_viewModel;
    id <BrandProfileMsgCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDisplaying; // @synthesize isDisplaying=_isDisplaying;
@property(nonatomic) __weak id <BrandProfileMsgCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BrandProfileMsgBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIView *highlightMaskView; // @synthesize highlightMaskView=_highlightMaskView;
- (void)addCornerToContentView:(unsigned long long)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)removeHighlightMaskView;
- (void)addHighlightMaskView;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (void)prepareForReuse;
- (void)onUpdateViewModel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

