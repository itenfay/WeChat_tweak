//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class NSArray, UILabel, UIView;

@interface WCPayOverseaMainWalletFooterView : UICollectionReusableView
{
    NSArray *_m_walletRegionDescArray;
    UIView *_m_coverView;
    UILabel *_m_walletRegionDescLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *m_walletRegionDescLabel; // @synthesize m_walletRegionDescLabel=_m_walletRegionDescLabel;
@property(retain, nonatomic) UIView *m_coverView; // @synthesize m_coverView=_m_coverView;
@property(retain, nonatomic) NSArray *m_walletRegionDescArray; // @synthesize m_walletRegionDescArray=_m_walletRegionDescArray;
- (void)updateWalletRegionDescView;
- (id)totalRegionDesc;
- (void)updateCoverView;
- (void)layoutSubviews;

@end

