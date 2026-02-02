//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveTaskId, MMUIActivityIndicatorView, UIImageView, UILabel;

@interface MMFinderLiveConnectMicPkProgressTimeIndicator : UIView
{
    unsigned int _lastDisplayedTime;
    UIImageView *_designatedGiftIconView;
    UIView *_containerView;
    UIImageView *_pkLogoIcon;
    UILabel *_progressLabel;
    MMUIActivityIndicatorView *_calLoadingView;
    UILabel *_calcTipLabel;
    MMFinderLiveTaskId *_taskId;
    unsigned long long _lastPkState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lastDisplayedTime; // @synthesize lastDisplayedTime=_lastDisplayedTime;
@property(nonatomic) unsigned long long lastPkState; // @synthesize lastPkState=_lastPkState;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) UILabel *calcTipLabel; // @synthesize calcTipLabel=_calcTipLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *calLoadingView; // @synthesize calLoadingView=_calLoadingView;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UIImageView *pkLogoIcon; // @synthesize pkLogoIcon=_pkLogoIcon;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIImageView *designatedGiftIconView; // @synthesize designatedGiftIconView=_designatedGiftIconView;
- (id)liveTask;
- (void)updatePkStateUI:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)initViews;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

