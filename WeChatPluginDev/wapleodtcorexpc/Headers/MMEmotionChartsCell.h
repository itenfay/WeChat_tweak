//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreItem, MMEmoticonStoreDownloadLogic, MMWebImageView, NSString, UILabel;
@protocol MMEmotionChartsCellDelegate;

@interface MMEmotionChartsCell
{
    long long _type;
    long long _scene;
    _Bool m_freeToDownload;
    _Bool m_showBlackLine;
    NSString *m_storeSession;
    EmoticonStoreItem *m_storeItem;
    MMWebImageView *m_iconImageView;
    UILabel *m_nameLabel;
    UILabel *m_inroduceLabel;
    double m_cellHeight;
    id <MMEmotionChartsCellDelegate> _delegate;
    MMEmoticonStoreDownloadLogic *_downloadLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMEmoticonStoreDownloadLogic *downloadLogic; // @synthesize downloadLogic=_downloadLogic;
@property(nonatomic) __weak id <MMEmotionChartsCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool m_showBlackLine; // @synthesize m_showBlackLine;
@property(nonatomic) double m_cellHeight; // @synthesize m_cellHeight;
@property(nonatomic) _Bool m_freeToDownload; // @synthesize m_freeToDownload;
@property(retain, nonatomic) UILabel *m_inroduceLabel; // @synthesize m_inroduceLabel;
@property(retain, nonatomic) UILabel *m_nameLabel; // @synthesize m_nameLabel;
@property(retain, nonatomic) MMWebImageView *m_iconImageView; // @synthesize m_iconImageView;
@property(retain, nonatomic) EmoticonStoreItem *m_storeItem; // @synthesize m_storeItem;
@property(retain, nonatomic) NSString *m_storeSession; // @synthesize m_storeSession;
- (double)downloadViewMaxWidth;
- (id)downloadLogicReportInfo;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)arg1;
- (void)loadSubView;
- (void)loadDownloadView;
- (void)loadIntroduceLabel;
- (void)loadNameLabel;
- (void)loadIconImageView;
- (void)layoutSubviews;
- (void)initStoreSession:(id)arg1 StoreItem:(id)arg2 ShouldShowBlackLine:(_Bool)arg3 CellHeight:(double)arg4;
- (void)setScene:(long long)arg1 andType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

