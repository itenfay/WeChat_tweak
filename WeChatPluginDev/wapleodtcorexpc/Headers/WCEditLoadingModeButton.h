//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, UIImageView, UIView;

@interface WCEditLoadingModeButton
{
    _Bool _loading;
    UIView *_loadingView;
    UIImageView *_crookIconView;
    MMUIActivityIndicatorView *_indicatorView;
    UIView *_crookBackGroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *crookBackGroundView; // @synthesize crookBackGroundView=_crookBackGroundView;
@property(nonatomic) __weak MMUIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) __weak UIImageView *crookIconView; // @synthesize crookIconView=_crookIconView;
@property(nonatomic) __weak UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
- (void)updateButtonState;
- (void)setSelected:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setCrookIconBackGroundColor:(id)arg1;
- (void)setupSubviews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

