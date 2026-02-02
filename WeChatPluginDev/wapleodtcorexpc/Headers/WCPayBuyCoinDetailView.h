//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class GetWecoinPriceListResponse, NSString, RichTextView, UIButton;

@interface WCPayBuyCoinDetailView : UIView
{
    unsigned int _settedHeight;
    UIButton *_selectBoxButton;
    UIView *_rows;
    UIView *_protocolView;
    RichTextView *_protocolTextView;
    GetWecoinPriceListResponse *_priceListsResponse;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int settedHeight; // @synthesize settedHeight=_settedHeight;
@property(retain, nonatomic) GetWecoinPriceListResponse *priceListsResponse; // @synthesize priceListsResponse=_priceListsResponse;
@property(retain, nonatomic) RichTextView *protocolTextView; // @synthesize protocolTextView=_protocolTextView;
@property(retain, nonatomic) UIView *protocolView; // @synthesize protocolView=_protocolView;
@property(retain, nonatomic) UIView *rows; // @synthesize rows=_rows;
@property(retain, nonatomic) UIButton *selectBoxButton; // @synthesize selectBoxButton=_selectBoxButton;
- (id)getProductIdsWith:(id)arg1;
- (_Bool)shouldFetchNewProductInfos:(id)arg1;
- (id)rowTwoInfos;
- (id)rowOneInfos;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)clickCoin:(id)arg1;
- (void)clickSelectBox;
- (void)shakeAgreementView;
- (void)layoutProtocolView;
- (id)layoutRowTwo;
- (id)layoutRowOne;
- (void)layoutRows;
- (void)refresh;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

