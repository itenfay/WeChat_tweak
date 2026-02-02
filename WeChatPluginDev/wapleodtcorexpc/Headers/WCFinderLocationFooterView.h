//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, NSString, UIColor, UIFont, UILabel, UIView, WCFinderLocationReportModel, WCFinderLocationTerminatorViewParams;
@protocol WCFinderLocationFooterViewDelegate;

@interface WCFinderLocationFooterView
{
    _Bool _centerAlignLabel;
    _Bool _labelSingleLine;
    _Bool _enabledAfterRefreshing;
    _Bool _labelNewLineBreakRules;
    MMUIActivityIndicatorView *_activityIndicatorView;
    UILabel *_label;
    UIView *_endView;
    UIView *_customizedBlankView;
    double _lineViewWidth;
    double _lineViewHeight;
    UIColor *_lineColor;
    NSString *_normalText;
    NSString *_noMoreSubTitle;
    NSString *_loadingText;
    UIColor *_textColor;
    UIFont *_textFont;
    WCFinderLocationTerminatorViewParams *_params;
    id <WCFinderLocationFooterViewDelegate> _delegate;
    WCFinderLocationReportModel *_reportModel;
}

+ (double)heightWithParams:(id)arg1 width:(double)arg2;
+ (double)defaultHeightWithWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLocationReportModel *reportModel; // @synthesize reportModel=_reportModel;
@property(nonatomic) __weak id <WCFinderLocationFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderLocationTerminatorViewParams *params; // @synthesize params=_params;
@property(nonatomic) _Bool labelNewLineBreakRules; // @synthesize labelNewLineBreakRules=_labelNewLineBreakRules;
@property(nonatomic) _Bool enabledAfterRefreshing; // @synthesize enabledAfterRefreshing=_enabledAfterRefreshing;
@property(nonatomic) _Bool labelSingleLine; // @synthesize labelSingleLine=_labelSingleLine;
@property(nonatomic) _Bool centerAlignLabel; // @synthesize centerAlignLabel=_centerAlignLabel;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *loadingText; // @synthesize loadingText=_loadingText;
@property(retain, nonatomic) NSString *noMoreSubTitle; // @synthesize noMoreSubTitle=_noMoreSubTitle;
@property(retain, nonatomic) NSString *normalText; // @synthesize normalText=_normalText;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) double lineViewHeight; // @synthesize lineViewHeight=_lineViewHeight;
@property(nonatomic) double lineViewWidth; // @synthesize lineViewWidth=_lineViewWidth;
@property(retain, nonatomic) UIView *customizedBlankView; // @synthesize customizedBlankView=_customizedBlankView;
@property(retain, nonatomic) UIView *endView; // @synthesize endView=_endView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
- (void)terminatorViewDidClickSubtitle;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)onStateOfNoData:(id)arg1;
- (void)setM_customizedBlankView:(id)arg1;
- (void)genStandardTerminatorViewWithTip:(id)arg1;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)onStateOfNoMoreData:(id)arg1 subTitle:(id)arg2;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (unsigned long long)getStatus;
- (void)resetStatus:(unsigned long long)arg1;
- (id)getTerminatorViewParams;
- (void)useMMSettingStyle;
- (void)setM_textColor:(id)arg1;
- (id)initWhiteLoadingWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 whiteLoading:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

