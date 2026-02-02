//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSNumber, NSString, UIButton, UIColor, UILabel;
@protocol WCFinderFeedUploadingToolBarDelegate;

@interface WCFinderFeedUploadingToolBar : UIView
{
    _Bool _hadEncoding;
    id <WCFinderFeedUploadingToolBarDelegate> _delegate;
    UIView *_progressView;
    UIButton *_cancelButton;
    UILabel *_tipsLabel;
    NSString *_tid;
    CAShapeLayer *_ovalShapeLayer;
    UILabel *_descLabel;
    NSNumber *_iconsHeight;
    UILabel *_deleteTipsLabel;
    UIColor *_tipsLabelColor;
    UIColor *_normalColor;
    UIColor *_loadingColor;
    double _lastProgress;
}

- (void).cxx_destruct;
@property(nonatomic) double lastProgress; // @synthesize lastProgress=_lastProgress;
@property(retain, nonatomic) UIColor *loadingColor; // @synthesize loadingColor=_loadingColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(retain, nonatomic) UIColor *tipsLabelColor; // @synthesize tipsLabelColor=_tipsLabelColor;
@property(retain, nonatomic) UILabel *deleteTipsLabel; // @synthesize deleteTipsLabel=_deleteTipsLabel;
@property(nonatomic) _Bool hadEncoding; // @synthesize hadEncoding=_hadEncoding;
@property(retain, nonatomic) NSNumber *iconsHeight; // @synthesize iconsHeight=_iconsHeight;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) CAShapeLayer *ovalShapeLayer; // @synthesize ovalShapeLayer=_ovalShapeLayer;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak id <WCFinderFeedUploadingToolBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderDataItemEncodingProgress:(double)arg1;
- (void)onFinderDataItemPostProgressWithTid:(id)arg1 progress:(id)arg2;
- (void)clickCancelAction;
- (void)updateProgress:(double)arg1;
- (void)setupProgressCricle;
- (double)progressWidth;
- (void)setUpUI;
- (void)bindTid:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 iconsHeight:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1 iconsHeight:(id)arg2 tipsLabelColor:(id)arg3 progressNormalColor:(id)arg4 progressLoadingColor:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1 iconHeight:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

