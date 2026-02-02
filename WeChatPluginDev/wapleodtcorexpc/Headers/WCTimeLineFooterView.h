//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTerminatorViewParams, MMUIActivityIndicatorView, NSString, UIColor, UIFont, UILabel, UIView;

@interface WCTimeLineFooterView
{
    MMUIActivityIndicatorView *m_activityIndicatorView;
    UILabel *m_label;
    UIView *m_endView;
    double m_lineViewWidth;
    double m_lineViewHeight;
    UIColor *m_lineColor;
    NSString *m_normalText;
    NSString *m_loadingText;
    UIFont *m_textFont;
    _Bool m_centerAlignLabel;
    _Bool m_labelSingleLine;
    _Bool m_enabledAfterRefreshing;
    _Bool _m_labelNewLineBreakRules;
    UIView *m_customizedBlankView;
    UIColor *_m_textColor;
    MMTerminatorViewParams *_params;
}

+ (double)heightWithParams:(id)arg1 width:(double)arg2;
+ (double)defaultHeightWithWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTerminatorViewParams *params; // @synthesize params=_params;
@property(nonatomic) _Bool m_labelNewLineBreakRules; // @synthesize m_labelNewLineBreakRules=_m_labelNewLineBreakRules;
@property(retain, nonatomic) UIColor *m_textColor; // @synthesize m_textColor=_m_textColor;
@property(nonatomic) _Bool m_enabledAfterRefreshing; // @synthesize m_enabledAfterRefreshing;
@property(nonatomic) _Bool m_labelSingleLine; // @synthesize m_labelSingleLine;
@property(nonatomic) _Bool m_centerAlignLabel; // @synthesize m_centerAlignLabel;
@property(retain, nonatomic) UIFont *m_textFont; // @synthesize m_textFont;
@property(retain, nonatomic) NSString *m_loadingText; // @synthesize m_loadingText;
@property(retain, nonatomic) NSString *m_normalText; // @synthesize m_normalText;
@property(retain, nonatomic) UIColor *m_lineColor; // @synthesize m_lineColor;
@property(nonatomic) double m_lineViewHeight; // @synthesize m_lineViewHeight;
@property(nonatomic) double m_lineViewWidth; // @synthesize m_lineViewWidth;
@property(retain, nonatomic) UIView *m_customizedBlankView; // @synthesize m_customizedBlankView;
@property(retain, nonatomic) UIView *m_endView; // @synthesize m_endView;
@property(retain, nonatomic) UILabel *m_label; // @synthesize m_label;
@property(retain, nonatomic) MMUIActivityIndicatorView *m_activityIndicatorView; // @synthesize m_activityIndicatorView;
- (void)layoutSubviews;
- (void)onStateOfNoData:(id)arg1;
- (void)genStandardTerminatorViewWithTip:(id)arg1;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (unsigned long long)getStatus;
- (void)resetStatus:(unsigned long long)arg1;
- (id)getTerminatorViewParams;
- (void)useMMSettingStyle;
- (id)initWhiteLoadingWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 whiteLoading:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

