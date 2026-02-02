//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UIView, WCCardData;
@protocol WCCardPkgItemViewDelegate;

@interface WCCardPkgItemView
{
    _Bool _bSelected;
    _Bool _needSelect;
    long long _indexForBatchAdd;
    UIButton *_selectBtn;
    WCCardData *_cardData;
    _Bool _bIsLongPressHandled;
    UIView *_cardBgView;
    UIView *_coverView;
    id <WCCardPkgItemViewDelegate> _delegate;
}

+ (double)CardItemViewTopHeight;
+ (double)CardItemViewHeight;
- (void).cxx_destruct;
@property(nonatomic) long long indexForBatchAdd; // @synthesize indexForBatchAdd=_indexForBatchAdd;
@property(nonatomic) __weak id <WCCardPkgItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool bSelected; // @synthesize bSelected=_bSelected;
@property(nonatomic) _Bool needSelect; // @synthesize needSelect=_needSelect;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelectBtnState;
- (void)onSelectChanged;
- (id)getLogoView:(id)arg1;
- (id)getCardBgView:(unsigned int)arg1 bgColor:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCardData:(id)arg1;

@end

