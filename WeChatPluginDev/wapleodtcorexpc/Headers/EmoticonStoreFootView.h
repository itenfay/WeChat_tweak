//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, UILabel;

@interface EmoticonStoreFootView
{
    unsigned int m_lineViewWidth;
    MMUIActivityIndicatorView *m_activityIndicatorView;
    UILabel *m_label;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_lineViewWidth; // @synthesize m_lineViewWidth;
@property(retain, nonatomic) UILabel *m_label; // @synthesize m_label;
@property(retain, nonatomic) MMUIActivityIndicatorView *m_activityIndicatorView; // @synthesize m_activityIndicatorView;
- (void)onStateOfNoData:(id)arg1;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (void)layoutSubviews;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1;

@end

