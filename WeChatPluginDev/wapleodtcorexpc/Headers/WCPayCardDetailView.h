//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class NSString, UIImageView, UILabel, UIView, WCPayBadgeView, WCPayBankLogoView, WCPayBindCardInfo, WCPayNetImageResource;
@protocol WCPayCardDetailViewDelegate;

@interface WCPayCardDetailView : UIButton
{
    WCPayBindCardInfo *m_info;
    UILabel *bankTypeLabel;
    _Bool needUpdateResource;
    UIImageView *backView;
    UIImageView *waterMaskView;
    WCPayBankLogoView *logoView;
    UIView *bottomArea;
    id <WCPayCardDetailViewDelegate> _delegate;
    WCPayNetImageResource *_m_waterMaskImage;
    WCPayNetImageResource *_m_backgroundImage;
    WCPayNetImageResource *_m_bankLogoImage;
    UIView *_bankNoView;
    WCPayBadgeView *_m_invalidView;
    UIButton *_coverBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *coverBtn; // @synthesize coverBtn=_coverBtn;
@property(retain, nonatomic) WCPayBadgeView *m_invalidView; // @synthesize m_invalidView=_m_invalidView;
@property(retain, nonatomic) UIView *bankNoView; // @synthesize bankNoView=_bankNoView;
@property(retain, nonatomic) WCPayNetImageResource *m_bankLogoImage; // @synthesize m_bankLogoImage=_m_bankLogoImage;
@property(retain, nonatomic) WCPayNetImageResource *m_backgroundImage; // @synthesize m_backgroundImage=_m_backgroundImage;
@property(retain, nonatomic) WCPayNetImageResource *m_waterMaskImage; // @synthesize m_waterMaskImage=_m_waterMaskImage;
@property(nonatomic) __weak id <WCPayCardDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *bottomArea; // @synthesize bottomArea;
@property(retain, nonatomic) WCPayBankLogoView *logoView; // @synthesize logoView;
@property(retain, nonatomic) UIImageView *waterMaskView; // @synthesize waterMaskView;
@property(retain, nonatomic) UIImageView *backView; // @synthesize backView;
@property(nonatomic) _Bool needUpdateResource; // @synthesize needUpdateResource;
- (double)cardBackHeight;
- (double)waterMaskHeight;
- (void)OnGetBankResourcesNotification:(id)arg1;
- (id)getInfo;
- (void)CancelPerformGetData;
- (void)dealloc;
- (id)initWithBindCardInfo:(id)arg1 Data:(id)arg2 delegate:(id)arg3;
- (_Bool)isShowECardMangeArea;
- (void)coverBtnClick;
- (void)initViewWithBindCardInfo:(id)arg1 Data:(id)arg2;
- (void)OnGetBankResources:(id)arg1 Error:(id)arg2;
- (void)OnGetBankPackage:(id)arg1 Error:(id)arg2;
- (void)OnSuccessGetBankResources:(id)arg1;
- (void)OnSuccessGetBankPackage:(id)arg1;
- (void)updateLogoImage:(id)arg1;
- (void)SaveAndShowBankLogoImage:(id)arg1;
- (void)updateBackgroundImage:(id)arg1;
- (void)SaveAndShowBackGroundImage:(id)arg1;
- (void)layoutLogoView:(id)arg1;
- (void)updateWaterMaskImage:(id)arg1;
- (void)SaveAndShowWaterMaskImage:(id)arg1;
- (void)GetAboutAllImage;
- (id)getBackGroundImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

