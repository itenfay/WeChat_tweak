//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLiveNoticeInfo, FinderObject, MMUIButton, MMUILabel, MMWebImageView, NSAttributedString, UIScrollView, YYLabel;
@protocol WCFinderLiveCompleteLiveContentViewDelegate;

@interface WCFinderLiveCompleteLiveContentView : UIView
{
    UIScrollView *_liveContainerView;
    YYLabel *_liveDetailLabel;
    YYLabel *_liveCaculateDetailLabel;
    unsigned long long _contentType;
    id <WCFinderLiveCompleteLiveContentViewDelegate> _delegate;
    unsigned long long _detailLabelState;
    MMWebImageView *_coverView;
    MMUILabel *_titleLabel;
    MMUILabel *_timeLabel;
    MMUIButton *_actionButton;
    double _liveDetailLabelHeight;
    FinderLiveNoticeInfo *_liveNoticeInfo;
    FinderObject *_finderObject;
    UIView *_sepelateLine;
    NSAttributedString *_originAttributedString;
    NSAttributedString *_expandAttributedString;
    NSAttributedString *_packAttributedString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *packAttributedString; // @synthesize packAttributedString=_packAttributedString;
@property(retain, nonatomic) NSAttributedString *expandAttributedString; // @synthesize expandAttributedString=_expandAttributedString;
@property(retain, nonatomic) NSAttributedString *originAttributedString; // @synthesize originAttributedString=_originAttributedString;
@property(retain, nonatomic) UIView *sepelateLine; // @synthesize sepelateLine=_sepelateLine;
@property(retain, nonatomic) FinderObject *finderObject; // @synthesize finderObject=_finderObject;
@property(retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo; // @synthesize liveNoticeInfo=_liveNoticeInfo;
@property(nonatomic) double liveDetailLabelHeight; // @synthesize liveDetailLabelHeight=_liveDetailLabelHeight;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) unsigned long long detailLabelState; // @synthesize detailLabelState=_detailLabelState;
@property(nonatomic) __weak id <WCFinderLiveCompleteLiveContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
- (void)actionButtonClick:(id)arg1;
@property(readonly, nonatomic) YYLabel *liveCaculateDetailLabel;
@property(readonly, nonatomic) YYLabel *liveDetailLabel;
@property(readonly, nonatomic) UIScrollView *liveContainerView;
- (void)updateCurrentContentViewHeight:(unsigned long long)arg1;
- (struct CGSize)sizeLabelToFit:(id)arg1 width:(double)arg2 height:(double)arg3;
- (id)getExpandAttributedStringWithFont:(id)arg1;
- (id)getTruncationTokenAttributedStringWithFont:(id)arg1;
- (id)getPackAttributedStringWithFont:(id)arg1;
- (id)getAttributedStringWithOriginString:(id)arg1 font:(id)arg2;
- (double)getCurrentViewHeight:(id)arg1 font:(id)arg2 detailLabelState:(unsigned long long)arg3;
- (double)getHeightWithType:(unsigned long long)arg1 finderObject:(id)arg2 liveNoticeInfo:(id)arg3 detailLabelState:(unsigned long long)arg4;
- (_Bool)isLabelOverWidth:(id)arg1;
- (void)updateDataWhenLivePreview;
- (void)updateDataWhenLive;
- (void)updateContentViewAction:(id)arg1;
- (void)updateData;
- (void)updateViewWithType:(unsigned long long)arg1 finderObject:(id)arg2 liveNoticeInfo:(id)arg3;
- (void)layoutActionButtonWhenClick:(_Bool)arg1 type:(unsigned long long)arg2;
- (_Bool)isPreviewNoneIntroduction;
- (void)layoutUIWhenLivePreview;
- (void)layoutUIWhenLive;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

