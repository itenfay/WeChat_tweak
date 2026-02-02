//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, StorageUsageSummaryModel, UILabel;

@interface StorageUsageSummaryView : UIView
{
    MMUILabel *m_titleLabel;
    MMUILabel *m_sizeLabel;
    MMUILabel *m_subTitleLabel;
    UILabel *m_percentLabel;
    UIView *m_percentView;
    _Bool isAvailabled;
    StorageUsageSummaryModel *m_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) StorageUsageSummaryModel *model; // @synthesize model=m_model;
- (void)updateLayoutWithAnimation;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layout:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setProgress:(float)arg1 isAvailabled:(_Bool)arg2;
- (void)finishScanAndSetProgress;
- (void)initPercentView;
- (void)initSubTitleLabel;
- (void)initSizeLabel;
- (void)initTitleLabel;
- (void)initSubview;
- (id)initWithFrame:(struct CGRect)arg1;

@end

