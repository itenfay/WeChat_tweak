//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class UIImageView, UIView, WCPayNoticeBannerView, WCPayOverseaIBGGetWalletCgiCache;
@protocol WCPayNoticeBannerViewDelegate;

@interface WCPayOverseaMainWalletGrayViewHeader : UICollectionReusableView
{
    UIView *_m_coverView;
    UIImageView *_m_logoView;
    WCPayNoticeBannerView *_m_noticeBannerView;
    WCPayOverseaIBGGetWalletCgiCache *_m_walletResp;
    id <WCPayNoticeBannerViewDelegate> _m_noticeDelegate;
}

- (void).cxx_destruct;
@property __weak id <WCPayNoticeBannerViewDelegate> m_noticeDelegate; // @synthesize m_noticeDelegate=_m_noticeDelegate;
@property(retain) WCPayOverseaIBGGetWalletCgiCache *m_walletResp; // @synthesize m_walletResp=_m_walletResp;
@property(retain) WCPayNoticeBannerView *m_noticeBannerView; // @synthesize m_noticeBannerView=_m_noticeBannerView;
@property(retain, nonatomic) UIImageView *m_logoView; // @synthesize m_logoView=_m_logoView;
@property(retain, nonatomic) UIView *m_coverView; // @synthesize m_coverView=_m_coverView;
- (id)contentAccessbilityLabel;
- (void)updateLogoView;
- (id)utf8String:(id)arg1;
- (void)updateBannerView;
- (void)updateCoverView;
- (void)layoutSubviews;
- (void)updateWalletResp:(id)arg1 noticeDelegate:(id)arg2;

@end

