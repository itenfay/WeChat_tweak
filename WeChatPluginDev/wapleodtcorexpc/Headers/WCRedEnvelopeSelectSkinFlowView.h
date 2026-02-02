//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class HbEnvelopSource, NSMutableArray, NSMutableDictionary, NSString, UICollectionView, UICollectionViewFlowLayout, WCRedEnvelopeFlowViewDetailView, WCRedEnvelopesControlData, WCRedEnvelopesExpiredSkinViewControllerFooter;
@protocol WCRedEnvelopeSelectSkinFlowViewDelegate;

@interface WCRedEnvelopeSelectSkinFlowView : UIView
{
    WCRedEnvelopesControlData *m_data;
    WCRedEnvelopeFlowViewDetailView *introView;
    _Bool _bHasReportCanShowExpireEntry;
    _Bool _isShowDetailView;
    unsigned int _cellHeight;
    unsigned int _currentIndex;
    UICollectionView *_m_collectionView;
    UICollectionViewFlowLayout *_m_flowLayout;
    NSMutableDictionary *_m_cellIdentifierDict;
    NSMutableArray *_redEnvelopesList;
    HbEnvelopSource *_currentSource;
    id <WCRedEnvelopeSelectSkinFlowViewDelegate> _m_delegate;
    WCRedEnvelopesExpiredSkinViewControllerFooter *_footerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCRedEnvelopesExpiredSkinViewControllerFooter *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak id <WCRedEnvelopeSelectSkinFlowViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) HbEnvelopSource *currentSource; // @synthesize currentSource=_currentSource;
@property(nonatomic) _Bool isShowDetailView; // @synthesize isShowDetailView=_isShowDetailView;
@property(nonatomic) unsigned int currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableArray *redEnvelopesList; // @synthesize redEnvelopesList=_redEnvelopesList;
@property(nonatomic) unsigned int cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) NSMutableDictionary *m_cellIdentifierDict; // @synthesize m_cellIdentifierDict=_m_cellIdentifierDict;
@property(retain, nonatomic) UICollectionViewFlowLayout *m_flowLayout; // @synthesize m_flowLayout=_m_flowLayout;
@property(retain, nonatomic) UICollectionView *m_collectionView; // @synthesize m_collectionView=_m_collectionView;
- (void)onWCRedEnvelopeFlowViewDetailViewSelect:(id)arg1;
- (void)onWCRedEnvelopeFlowViewDetailViewCancel;
- (void)onTapCell:(id)arg1;
- (void)onTapExpiredCell:(id)arg1;
- (void)onTapCustomizeCell:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLongPressCell:(id)arg1;
- (void)onWCRedEnvelopesExpiredSkinEntryCollectionViewCellClickEntry;
- (void)onWCRedEnvelopesCustomizeSkinEntryCellClickEntry:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)switchToIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)scrollToCurrentIndex:(_Bool)arg1;
- (void)refreshViewWithData;
- (void)reloadData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)deleteHbEnvelopSource:(id)arg1;
- (id)getData;
- (void)closeIntroView;
- (void)showDetailViewIfNeeded;
- (void)onWCRedEnvelopeFlowViewDetailViewGotoPreview:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

