//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, NSString, UIColor, UIFont, UILabel, UIView;

@interface WCStoryRefreshFooterView
{
    _Bool _centerAlignLabel;
    _Bool _darkStyle;
    MMUIActivityIndicatorView *_activityIndicatorView;
    UILabel *_label;
    UIView *_endView;
    double _lineViewWidth;
    double _lineViewHeight;
    NSString *_normalText;
    NSString *_loadingText;
    UIColor *_textColor;
    UIFont *_textFont;
}

+ (id)terminatorViewParamsWithTip:(id)arg1 darkSytle:(_Bool)arg2;
+ (double)heightForWidth:(double)arg1 darkSytle:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool darkStyle; // @synthesize darkStyle=_darkStyle;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *loadingText; // @synthesize loadingText=_loadingText;
@property(copy, nonatomic) NSString *normalText; // @synthesize normalText=_normalText;
@property(nonatomic) double lineViewHeight; // @synthesize lineViewHeight=_lineViewHeight;
@property(nonatomic) double lineViewWidth; // @synthesize lineViewWidth=_lineViewWidth;
@property(retain, nonatomic) UIView *endView; // @synthesize endView=_endView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) _Bool centerAlignLabel; // @synthesize centerAlignLabel=_centerAlignLabel;
- (id)labelColor;
- (void)layoutSubviews;
- (void)onStateOfNoData:(id)arg1;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (unsigned long long)getStatus;
- (void)resetStatus:(unsigned long long)arg1;
- (void)useMMSettingStyle;
- (id)initWhiteLoadingWithFrame:(struct CGRect)arg1 darkSytle:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 whiteLoading:(_Bool)arg2 darkSytle:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

