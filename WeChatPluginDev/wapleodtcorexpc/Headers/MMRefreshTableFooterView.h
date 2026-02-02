//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol MMRefreshTableFooterDelegate;

@interface MMRefreshTableFooterView
{
    unsigned long long m_state;
    double m_heightLimit;
    double m_refreshThresholdOffset;
    id <MMRefreshTableFooterDelegate> m_delegate;
    _Bool _m_bTop;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bTop; // @synthesize m_bTop=_m_bTop;
@property(nonatomic) double m_refreshThresholdOffset; // @synthesize m_refreshThresholdOffset;
@property(nonatomic) double m_heightLimit; // @synthesize m_heightLimit;
@property(readonly, nonatomic) unsigned long long m_state; // @synthesize m_state;
@property(nonatomic) __weak id <MMRefreshTableFooterDelegate> m_delegate; // @synthesize m_delegate;
- (void)refreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)refreshScrollView:(id)arg1 didScrollAtOffset:(double)arg2;
- (void)refreshScrollViewDidScroll:(id)arg1 forces:(_Bool)arg2;
- (void)refreshScrollViewDidScroll:(id)arg1;
- (void)removeClickAction;
- (void)manualTriggerLoading;
- (void)onClick;
- (void)setState:(unsigned long long)arg1;
- (void)resetState;
- (void)onStateOfNoData:(id)arg1;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (id)initWithFrame:(struct CGRect)arg1;

@end

