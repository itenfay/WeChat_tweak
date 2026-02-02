//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCPayOverseaIBGGetWalletCgiCache;
@protocol WCPayNoticeBannerViewDelegate;

@interface WCPayOverseaMainWalletBannerData
{
    WCPayOverseaIBGGetWalletCgiCache *_m_walletResp;
    id <WCPayNoticeBannerViewDelegate> _m_noticeDelegate;
}

- (void).cxx_destruct;
@property __weak id <WCPayNoticeBannerViewDelegate> m_noticeDelegate; // @synthesize m_noticeDelegate=_m_noticeDelegate;
@property(retain, nonatomic) WCPayOverseaIBGGetWalletCgiCache *m_walletResp; // @synthesize m_walletResp=_m_walletResp;
- (float)headerViewHeight:(id)arg1;
- (double)caluateDynamicCellHeight:(id)arg1;
- (double)totalHeight;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;

@end

