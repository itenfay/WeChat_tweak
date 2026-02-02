//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSArray, NSString, UIButton, WCGiftCardData;
@protocol WCMultiGiftDelegate;

@interface WCMultiGiftView
{
    _Bool _isHide;
    double _maxWidth;
    double _minHeight;
    WCGiftCardData *_giftCardData;
    id <WCMultiGiftDelegate> _delegate;
    MMTableView *_giftTableView;
    UIButton *_footerButton;
    NSArray *_acceptedCardList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isHide; // @synthesize isHide=_isHide;
@property(retain, nonatomic) NSArray *acceptedCardList; // @synthesize acceptedCardList=_acceptedCardList;
@property(retain, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) MMTableView *giftTableView; // @synthesize giftTableView=_giftTableView;
@property(nonatomic) __weak id <WCMultiGiftDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCGiftCardData *giftCardData; // @synthesize giftCardData=_giftCardData;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
- (void)doHideLogic;
- (id)createTableViewFooterView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configTableSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

