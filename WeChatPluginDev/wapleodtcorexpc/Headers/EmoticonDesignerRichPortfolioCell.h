//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonPreviewWindowViewController, EmoticonStoreReportInfo, NSIndexPath, NSString, UICollectionView, UICollectionViewFlowLayout, UIImageView, UILabel, UILongPressGestureRecognizer, UIView;
@protocol EmoticonDesignerRichPortfolioCellDelegate;

@interface EmoticonDesignerRichPortfolioCell
{
    _Bool _showDownloadView;
    _Bool _needStaticsInfo;
    id <EmoticonDesignerRichPortfolioCellDelegate> _delegate;
    EmoticonStoreReportInfo *_reportInfo;
    UIView *_bottomViewContainer;
    UICollectionView *_emojiCollection;
    UIView *_downloadAndSendCountView;
    UICollectionViewFlowLayout *_emojiCollectionLayout;
    double _cellSize;
    unsigned long long _cellNum;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSIndexPath *_selectedIndexPath;
    UILabel *_sendCountLabel;
    UILabel *_downloadCountLabel;
    UIImageView *_downloadImageView;
    UIImageView *_sendImageView;
    EmoticonPreviewWindowViewController *_emoticonPreview;
}

+ (double)calcHeightWithIsShowCount:(_Bool)arg1 emojiCount:(unsigned long long)arg2 cellWidth:(double)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonPreviewWindowViewController *emoticonPreview; // @synthesize emoticonPreview=_emoticonPreview;
@property(retain, nonatomic) UIImageView *sendImageView; // @synthesize sendImageView=_sendImageView;
@property(retain, nonatomic) UIImageView *downloadImageView; // @synthesize downloadImageView=_downloadImageView;
@property(retain, nonatomic) UILabel *downloadCountLabel; // @synthesize downloadCountLabel=_downloadCountLabel;
@property(retain, nonatomic) UILabel *sendCountLabel; // @synthesize sendCountLabel=_sendCountLabel;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic) unsigned long long cellNum; // @synthesize cellNum=_cellNum;
@property(nonatomic) double cellSize; // @synthesize cellSize=_cellSize;
@property(retain, nonatomic) UICollectionViewFlowLayout *emojiCollectionLayout; // @synthesize emojiCollectionLayout=_emojiCollectionLayout;
@property(retain, nonatomic) UIView *downloadAndSendCountView; // @synthesize downloadAndSendCountView=_downloadAndSendCountView;
@property(retain, nonatomic) UICollectionView *emojiCollection; // @synthesize emojiCollection=_emojiCollection;
@property(retain, nonatomic) UIView *bottomViewContainer; // @synthesize bottomViewContainer=_bottomViewContainer;
@property(nonatomic) _Bool needStaticsInfo; // @synthesize needStaticsInfo=_needStaticsInfo;
@property(nonatomic) _Bool showDownloadView; // @synthesize showDownloadView=_showDownloadView;
@property(retain, nonatomic) EmoticonStoreReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(nonatomic) __weak id <EmoticonDesignerRichPortfolioCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onShouldShowEmoticonDetailPage:(id)arg1;
- (void)onFinishPreviewAndChangeToPid:(id)arg1;
- (void)onLongPressToPreview:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)downloadViewMaxWidth;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)arg1;
- (void)handleReward;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)clearReddotIfNeeded;
- (_Bool)isRewardEnabled;
- (void)initDownloadAndSendCountView;
- (void)initCollectionView;
- (void)initBottomViewContainer;
- (void)calculateCellSize;
- (void)layoutBaseViewContainer;
- (void)layoutDownloadAndSendCountView;
- (void)layoutBottomContainer;
- (void)layoutContentView;
- (void)layoutSubviews;
- (void)configGestureRecognizer;
- (void)updateDownloadAndSendLabel;
- (void)updateStoreItem:(id)arg1;
- (_Bool)layoutStaticBtnWidth;
- (id)downloadLogicConfig;
- (void)createOrUpdateLayout;
- (void)setHighlighted:(_Bool)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

