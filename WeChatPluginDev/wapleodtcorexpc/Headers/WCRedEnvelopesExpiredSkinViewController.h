//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, UICollectionView, UICollectionViewFlowLayout, WCRedEnvelopesAtmospherePagView, WCRedEnvelopesExpiredSkinViewControllerFooter, WCRedEnvelopesReceiveHomeView;
@protocol WCRedEnvelopesExpiredSkinViewControllerDelegate;

@interface WCRedEnvelopesExpiredSkinViewController
{
    WCRedEnvelopesReceiveHomeView *introView;
    _Bool _viewDidBack;
    unsigned int _cellHeight;
    id <WCRedEnvelopesExpiredSkinViewControllerDelegate> _m_delegate;
    UICollectionView *_m_collectionView;
    UICollectionViewFlowLayout *_m_flowLayout;
    NSMutableDictionary *_m_cellIdentifierDict;
    WCRedEnvelopesExpiredSkinViewControllerFooter *_footerView;
    WCRedEnvelopesAtmospherePagView *_atmospherePagView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCRedEnvelopesAtmospherePagView *atmospherePagView; // @synthesize atmospherePagView=_atmospherePagView;
@property(nonatomic) unsigned int cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) WCRedEnvelopesExpiredSkinViewControllerFooter *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) _Bool viewDidBack; // @synthesize viewDidBack=_viewDidBack;
@property(retain, nonatomic) NSMutableDictionary *m_cellIdentifierDict; // @synthesize m_cellIdentifierDict=_m_cellIdentifierDict;
@property(retain, nonatomic) UICollectionViewFlowLayout *m_flowLayout; // @synthesize m_flowLayout=_m_flowLayout;
@property(retain, nonatomic) UICollectionView *m_collectionView; // @synthesize m_collectionView=_m_collectionView;
@property(nonatomic) __weak id <WCRedEnvelopesExpiredSkinViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)closeIntroView;
- (void)WCRedEnvelopesReceiveHomeViewBack;
- (void)deleteHbEnvelopSource:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getData;
- (void)onLongPressCell:(id)arg1;
- (_Bool)shouldShowAtmospherePagView;
- (void)onTapCell:(id)arg1;
- (id)redEnvelopesBaseInfoDict;
- (_Bool)isShowLimitedWording;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)filterServerResponse:(id)arg1;
- (void)getNextPage:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)updateCollectionView;
- (void)updateViewData;
- (_Bool)shouldAutorotate;
- (void)refreshViewWithData:(id)arg1;
- (void)onBack;
- (void)updateNavigationbarItem;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setResponseData:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

