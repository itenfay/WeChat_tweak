//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUIImageView, MMUILabel;
@protocol BrandProfileNaviLiveBarDelegate;

@interface BrandProfileNaviLiveBar
{
    id <BrandProfileNaviLiveBarDelegate> _delegate;
    MMUIImageView *_finderIcon;
    MMUILabel *_finderLabel;
    MMUIImageView *_finderArrow;
    MMUIButton *_clickButtonMask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *clickButtonMask; // @synthesize clickButtonMask=_clickButtonMask;
@property(retain, nonatomic) MMUIImageView *finderArrow; // @synthesize finderArrow=_finderArrow;
@property(retain, nonatomic) MMUILabel *finderLabel; // @synthesize finderLabel=_finderLabel;
@property(retain, nonatomic) MMUIImageView *finderIcon; // @synthesize finderIcon=_finderIcon;
@property(nonatomic) __weak id <BrandProfileNaviLiveBarDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityLabel;
- (void)onButtonTouchUp:(id)arg1;
- (void)onButtonTouchDown:(id)arg1;
- (void)onButtonClicked;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)configureLayout;
- (void)initSelf;
- (id)init;

@end

