//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderPopupShowInfo, WCFinderPopupPanelReportModel, WCFinderPopupTipsView, WCFinderRedDotCtrlInfo;
@protocol WCFinderPopupPanelViewProtocol;

@interface WCFinderPopupPanelView
{
    _Bool _willCheckSlideReport;
    id <WCFinderPopupPanelViewProtocol> _delegate;
    WCFinderRedDotCtrlInfo *_cacheCtrlInfo;
    long long _currentIndex;
    WCFinderPopupPanelReportModel *_reportModel;
    long long _tabType;
    FinderPopupShowInfo *_popupShowInfo;
    WCFinderPopupTipsView *_tipsView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderPopupTipsView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) FinderPopupShowInfo *popupShowInfo; // @synthesize popupShowInfo=_popupShowInfo;
@property(nonatomic) _Bool willCheckSlideReport; // @synthesize willCheckSlideReport=_willCheckSlideReport;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) WCFinderPopupPanelReportModel *reportModel; // @synthesize reportModel=_reportModel;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *cacheCtrlInfo; // @synthesize cacheCtrlInfo=_cacheCtrlInfo;
@property(nonatomic) __weak id <WCFinderPopupPanelViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void)reportSlideUpwardsReport;
- (_Bool)isShowing;
- (id)getBindFeedId;
- (void)beginShow;
- (void)setUpWithPopupShowInfo:(id)arg1;
- (id)genReportDicInfo;
- (id)getCurrentCgiEventEid;
- (void)triggerReportActionByActionType:(unsigned long long)arg1 unexpReasonType:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

