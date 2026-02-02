//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, NSString, UIImageView, WCPayPaidDetailLeadTailViewData, WCPayWebImageView;
@protocol WCPayPaidDetailLeadTailViewDelegate;

@interface WCPayPaidDetailLeadTailView : UIView
{
    _Bool _bIsSettled;
    WCPayPaidDetailLeadTailViewData *_viewData;
    id <WCPayPaidDetailLeadTailViewDelegate> _delegate;
    WCPayWebImageView *_logoImgView;
    MMUILabel *_descLabel;
    UIImageView *_arrowImgView;
    MMUIButton *_coverBtn;
    NSString *_settledContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *settledContent; // @synthesize settledContent=_settledContent;
@property(nonatomic) _Bool bIsSettled; // @synthesize bIsSettled=_bIsSettled;
@property(retain, nonatomic) MMUIButton *coverBtn; // @synthesize coverBtn=_coverBtn;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) WCPayWebImageView *logoImgView; // @synthesize logoImgView=_logoImgView;
@property(nonatomic) __weak id <WCPayPaidDetailLeadTailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCPayPaidDetailLeadTailViewData *viewData; // @synthesize viewData=_viewData;
- (void)refreshViewAfterSettledResult:(_Bool)arg1 resultContent:(id)arg2;
- (void)coverBtnClick;
- (void)refreshContentView;
- (id)initWithLeadTailViewWithViewData:(id)arg1 delegate:(id)arg2;

@end

