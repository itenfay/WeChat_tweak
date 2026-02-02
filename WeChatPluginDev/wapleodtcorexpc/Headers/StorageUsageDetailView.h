//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, MMUILabel, StorageUsageDetailModel, UIButton;
@protocol StorageUsageDetailViewDelegate;

@interface StorageUsageDetailView : UIView
{
    UIView *m_backgroundView;
    MMUILabel *m_titleLabel;
    MMUILabel *m_sizeLabel;
    MMUILabel *m_subTitleLabel;
    UIButton *m_actionButton;
    MMUIActivityIndicatorView *m_loadingView;
    StorageUsageDetailModel *m_model;
    _Bool _isLoading;
    id <StorageUsageDetailViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) __weak id <StorageUsageDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) StorageUsageDetailModel *model; // @synthesize model=m_model;
- (void)onDeepCleanButtonClicked:(id)arg1;
- (void)onClearCacheButtonClicked:(id)arg1;
- (void)onManageChatLogButtonClicked:(id)arg1;
- (void)updateSizeAfterCleaning:(unsigned long long)arg1;
- (void)hideLoading;
- (void)showLoading;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layout;
- (void)layoutSubviews;
- (void)initLoadingView;
- (void)initActionButton;
- (void)initSubTitleLabel;
- (void)initSizeLabel;
- (void)initTitleLabel;
- (void)initSubview;
- (id)initWithFrame:(struct CGRect)arg1;

@end

