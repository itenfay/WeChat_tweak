//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, WCCoinResignTaxCutTipsView, WecoinTaxReConfirmHalfPageInfo;

@interface WCCoinResignTaxCutTipsDetailView : UIView
{
    WecoinTaxReConfirmHalfPageInfo *_taxReconfirmInfo;
    WCCoinResignTaxCutTipsView *_parentView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WCCoinResignTaxCutTipsView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) WecoinTaxReConfirmHalfPageInfo *taxReconfirmInfo; // @synthesize taxReconfirmInfo=_taxReconfirmInfo;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)layoutSubviews;
- (void)layout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

