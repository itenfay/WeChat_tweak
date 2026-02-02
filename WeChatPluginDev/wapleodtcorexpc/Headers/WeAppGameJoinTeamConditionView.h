//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSDictionary, NSString, UIView, WeAppGameJoinTeamConditionItemView;
@protocol WeAppGameJoinTeamConditionCheckedDelegate;

@interface WeAppGameJoinTeamConditionView
{
    int _conditionId;
    id <WeAppGameJoinTeamConditionCheckedDelegate> _delegate;
    UIView *_contentView;
    UIView *_topAreaView;
    UIView *_listCondView;
    MMUIButton *_backButton;
    MMUILabel *_titleLabel;
    NSDictionary *_gameInfo;
    NSString *_conditionDesc;
    WeAppGameJoinTeamConditionItemView *_lastConditionItemView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WeAppGameJoinTeamConditionItemView *lastConditionItemView; // @synthesize lastConditionItemView=_lastConditionItemView;
@property(retain, nonatomic) NSString *conditionDesc; // @synthesize conditionDesc=_conditionDesc;
@property(nonatomic) int conditionId; // @synthesize conditionId=_conditionId;
@property(retain, nonatomic) NSDictionary *gameInfo; // @synthesize gameInfo=_gameInfo;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIView *listCondView; // @synthesize listCondView=_listCondView;
@property(retain, nonatomic) UIView *topAreaView; // @synthesize topAreaView=_topAreaView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WeAppGameJoinTeamConditionCheckedDelegate> delegate; // @synthesize delegate=_delegate;
- (int)getConditionId;
- (id)getConditionDesc;
- (void)onClickItemAction:(id)arg1;
- (void)onClickLeftButton;
- (double)contentViewHeight;
- (void)updateConditions:(id)arg1;
- (void)layoutUI;
- (void)initUI;
- (void)viewDidLoad;
- (id)initWithParmas:(id)arg1;

@end

