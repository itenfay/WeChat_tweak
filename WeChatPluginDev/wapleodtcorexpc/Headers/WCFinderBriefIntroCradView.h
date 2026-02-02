//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, UIButton, UILabel, WCFinderDataItem, WCFinderFeedImageCDNView, WCFinderNormalProgressBar;
@protocol WCFinderBriefIntroCradViewDelegate;

@interface WCFinderBriefIntroCradView
{
    id <WCFinderBriefIntroCradViewDelegate> _m_delegate;
    UILabel *_nextTipsLabel;
    UIButton *_closeBtn;
    WCFinderFeedImageCDNView *_coverImageView;
    RichTextView *_contentTextView;
    WCFinderNormalProgressBar *_progressBar;
    WCFinderDataItem *_dataItem;
    double _countdownDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double countdownDuration; // @synthesize countdownDuration=_countdownDuration;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCFinderNormalProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) RichTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) WCFinderFeedImageCDNView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *nextTipsLabel; // @synthesize nextTipsLabel=_nextTipsLabel;
@property(nonatomic) __weak id <WCFinderBriefIntroCradViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onPlayerProgressBarCurPlayPrecent:(double)arg1 dragState:(unsigned long long)arg2;
- (void)onClickCardAction;
- (void)onClickCloseBtn;
- (void)progressBarHidden:(_Bool)arg1 resumeProgress:(_Bool)arg2;
- (void)setUpUIWithDataItem:(id)arg1 countdownDuration:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1 contentVM:(id)arg2 countdownDuration:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

