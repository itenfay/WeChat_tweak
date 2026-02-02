//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableArray, NSObject, UIImageView, UILabel, UIView, VoIPToast;
@protocol MMStringToastViewDelegate;

@interface MMStringToastView
{
    _Bool _isUsingMPUI;
    _Bool _noNeedTips;
    _Bool _isIndividualWindow;
    unsigned int m_dotCountIncresement;
    NSMutableArray *m_remainStringList;
    UILabel *contentsLabel;
    UIImageView *m_backgroundImageView;
    MMTimer *m_actingTimer;
    NSObject<MMStringToastViewDelegate> *_delegate;
    VoIPToast *_curToast;
    VoIPToast *_topTips;
    UIImageView *_netStatusArrowIconView;
    UIView *_backgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool isIndividualWindow; // @synthesize isIndividualWindow=_isIndividualWindow;
@property(retain, nonatomic) UIImageView *netStatusArrowIconView; // @synthesize netStatusArrowIconView=_netStatusArrowIconView;
@property(nonatomic) _Bool noNeedTips; // @synthesize noNeedTips=_noNeedTips;
@property(retain, nonatomic) VoIPToast *topTips; // @synthesize topTips=_topTips;
@property(retain, nonatomic) VoIPToast *curToast; // @synthesize curToast=_curToast;
@property(nonatomic) _Bool isUsingMPUI; // @synthesize isUsingMPUI=_isUsingMPUI;
@property(nonatomic) __weak NSObject<MMStringToastViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int m_dotCountIncresement; // @synthesize m_dotCountIncresement;
@property(retain, nonatomic) MMTimer *m_actingTimer; // @synthesize m_actingTimer;
@property(retain, nonatomic) UIImageView *m_backgroundImageView; // @synthesize m_backgroundImageView;
@property(retain, nonatomic) UILabel *contentsLabel; // @synthesize contentsLabel;
@property(retain, nonatomic) NSMutableArray *m_remainStringList; // @synthesize m_remainStringList;
- (id)content;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onTapNetStatusTipView;
- (void)autoUpdateString;
- (struct CGRect)getStringRect:(id)arg1 WithWidth:(double)arg2 WithHeight:(double)arg3 type:(unsigned long long)arg4;
- (void)checkAfterDelay;
- (void)timerFunction;
- (void)hideToast;
- (void)clearAllString;
- (void)clearCurrentString;
- (void)setTopTipsNil;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2 type:(unsigned long long)arg3 isDiff:(_Bool)arg4;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2 type:(unsigned long long)arg3;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initView;
- (id)initWithFrameAndBackground:(struct CGRect)arg1;
- (void)clearActingTimer;
- (void)dealloc;
- (void)layoutSubviews;

@end

