//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIProgressView;
@protocol WCFinderEventMiniTaskViewDelegate;

@interface WCFinderEventMiniTaskView : UIView
{
    id <WCFinderEventMiniTaskViewDelegate> _delegate;
    UILabel *_timeWordingLabel;
    UILabel *_timeLabel;
    UILabel *_rewardWordingLabel;
    UILabel *_rewardLabel;
    UILabel *_rewardProgressWordingLabel;
    UILabel *_rewardProgressLabel;
    UIProgressView *_rewardProgressView;
    UIView *_miniTaskEntranceView;
    UILabel *_miniTaskEntranceWordingLabel;
    UILabel *_memberNumLabel;
    UIImageView *_miniTaskRightArrowView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *miniTaskRightArrowView; // @synthesize miniTaskRightArrowView=_miniTaskRightArrowView;
@property(retain, nonatomic) UILabel *memberNumLabel; // @synthesize memberNumLabel=_memberNumLabel;
@property(retain, nonatomic) UILabel *miniTaskEntranceWordingLabel; // @synthesize miniTaskEntranceWordingLabel=_miniTaskEntranceWordingLabel;
@property(retain, nonatomic) UIView *miniTaskEntranceView; // @synthesize miniTaskEntranceView=_miniTaskEntranceView;
@property(retain, nonatomic) UIProgressView *rewardProgressView; // @synthesize rewardProgressView=_rewardProgressView;
@property(retain, nonatomic) UILabel *rewardProgressLabel; // @synthesize rewardProgressLabel=_rewardProgressLabel;
@property(retain, nonatomic) UILabel *rewardProgressWordingLabel; // @synthesize rewardProgressWordingLabel=_rewardProgressWordingLabel;
@property(retain, nonatomic) UILabel *rewardLabel; // @synthesize rewardLabel=_rewardLabel;
@property(retain, nonatomic) UILabel *rewardWordingLabel; // @synthesize rewardWordingLabel=_rewardWordingLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *timeWordingLabel; // @synthesize timeWordingLabel=_timeWordingLabel;
@property(nonatomic) __weak id <WCFinderEventMiniTaskViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)miniTaskEntranceDidClick;
- (id)displayNumberStringWith:(double)arg1 maxDecimalDigits:(unsigned long long)arg2;
- (id)getMemberNumberTextWithEventInfo:(id)arg1;
- (_Bool)shouldShowExpiredTimeWithEventInfo:(id)arg1;
- (void)addFlexLayout;
- (void)updateWithEventInfo:(id)arg1;
- (id)init;

@end

