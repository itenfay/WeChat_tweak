//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSString, UILabel, UITapGestureRecognizer, UIView;

@interface MMLiveGamePlayTogetherJoinTeamCell
{
    _Bool _enableTeamUp;
    UIView *_containerView;
    UILabel *_liveRequirementLabel;
    UILabel *_gameRequirementLabel;
    UILabel *_teamHeadCountLabel;
    MMUIButton *_teamupStartButton;
    MMUILabel *_teamupNextLabel;
    UITapGestureRecognizer *_tapGesture;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool enableTeamUp; // @synthesize enableTeamUp=_enableTeamUp;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) MMUILabel *teamupNextLabel; // @synthesize teamupNextLabel=_teamupNextLabel;
@property(retain, nonatomic) MMUIButton *teamupStartButton; // @synthesize teamupStartButton=_teamupStartButton;
@property(retain, nonatomic) UILabel *teamHeadCountLabel; // @synthesize teamHeadCountLabel=_teamHeadCountLabel;
@property(retain, nonatomic) UILabel *gameRequirementLabel; // @synthesize gameRequirementLabel=_gameRequirementLabel;
@property(retain, nonatomic) UILabel *liveRequirementLabel; // @synthesize liveRequirementLabel=_liveRequirementLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onCellTeamUpStartButtonClicked;
- (void)updateWithItem:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)tapAction;
- (void)setupAction;
- (void)setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

