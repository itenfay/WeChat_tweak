//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, NSString, UILabel;

@interface VoipDescriptionButton
{
    _Bool _isInScreenSharingAudienceMode;
    _Bool _isStatusLoading;
    _Bool _isUsingMPUI;
    UILabel *m_bottomDescriptionLabel;
    double _labelYOffset;
    NSString *_statusText;
    UILabel *_statusLabel;
    MMUIActivityIndicatorView *_indicatorView;
    NSString *_prevStr;
}

+ (id)bottomDescriptionLabel;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *prevStr; // @synthesize prevStr=_prevStr;
@property(retain, nonatomic) MMUIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
@property(nonatomic) _Bool isUsingMPUI; // @synthesize isUsingMPUI=_isUsingMPUI;
@property(nonatomic) double labelYOffset; // @synthesize labelYOffset=_labelYOffset;
@property(nonatomic) _Bool isStatusLoading; // @synthesize isStatusLoading=_isStatusLoading;
@property(nonatomic) _Bool isInScreenSharingAudienceMode; // @synthesize isInScreenSharingAudienceMode=_isInScreenSharingAudienceMode;
@property(retain, nonatomic) UILabel *m_bottomDescriptionLabel; // @synthesize m_bottomDescriptionLabel;
- (void)setSelected:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
@property(nonatomic) double titleAlpha;
- (double)totalHeight;
- (void)showIndicatorLoading:(_Bool)arg1;
- (void)setupIndicator;
- (void)setBottomDescription:(id)arg1 withOffetY:(double)arg2;
- (void)setNewConfigBottomDescription:(id)arg1;
- (void)setBottomDescription:(id)arg1 withOffetY:(double)arg2 fittingWidth:(double)arg3 originFontSize:(double)arg4 labelMaxWidth:(double)arg5 ignoreSpaceChar:(_Bool)arg6;
- (void)setBottomDescription:(id)arg1 withOffetY:(double)arg2 fittingWidth:(double)arg3;
- (void)setBottomTextColor:(id)arg1;
- (void)layoutSubviews;
- (double)actualHeight;
- (id)getCurString;

@end

