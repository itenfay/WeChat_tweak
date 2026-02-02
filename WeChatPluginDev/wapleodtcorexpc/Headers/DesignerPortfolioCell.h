//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreReportInfo, MMBadgeView, UIColor;
@protocol DesignerPortfolioCellDelegate;

@interface DesignerPortfolioCell
{
    _Bool _showDownloadView;
    id <DesignerPortfolioCellDelegate> _delegate;
    EmoticonStoreReportInfo *_reportInfo;
    UIColor *_overridingColor;
    MMBadgeView *_reddotImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMBadgeView *reddotImageView; // @synthesize reddotImageView=_reddotImageView;
@property(retain, nonatomic) UIColor *overridingColor; // @synthesize overridingColor=_overridingColor;
@property(retain, nonatomic) EmoticonStoreReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(nonatomic) __weak id <DesignerPortfolioCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showDownloadView; // @synthesize showDownloadView=_showDownloadView;
- (double)downloadViewMaxWidth;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)arg1;
- (void)handleReward;
- (void)clearReddotIfNeeded;
- (_Bool)isRewardEnabled;
- (void)loadPidReddot;
- (void)updateStoreItem:(id)arg1;
- (_Bool)layoutStaticBtnWidth;
- (id)downloadLogicConfig;
- (id)initWithFrame:(struct CGRect)arg1;

@end

