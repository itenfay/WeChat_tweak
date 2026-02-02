//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView, MMUILabel, NSString, UIView;

@interface WeAppGameJoinTeamConditionItemView
{
    int _conditionId;
    NSString *_wording;
    MMUILabel *_conditionLabel;
    MMUIImageView *_rightIconView;
    UIView *_bottomLineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) MMUIImageView *rightIconView; // @synthesize rightIconView=_rightIconView;
@property(retain, nonatomic) MMUILabel *conditionLabel; // @synthesize conditionLabel=_conditionLabel;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(nonatomic) int conditionId; // @synthesize conditionId=_conditionId;
- (id)getDesc;
- (int)getId;
- (void)enableChecked:(_Bool)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initUI;
- (id)initWithParmas:(id)arg1 idx:(int)arg2 frame:(struct CGRect)arg3;

@end

