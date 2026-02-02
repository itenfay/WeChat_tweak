//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCTagLineView, MMWebImageView, UIButton, UIImageView, UILabel, UIView;

@interface GCRecommendGroupCell
{
    UIImageView *_lockImgView;
    MMWebImageView *_userImgView;
    UILabel *_onlyLabel;
    UIView *_conditonViewContainer;
    UIView *_conditionViewWithSpace;
    UIView *_bulletMsgContainer;
    GCTagLineView *_tagLineView;
    UIButton *_rightBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) GCTagLineView *tagLineView; // @synthesize tagLineView=_tagLineView;
@property(retain, nonatomic) UIView *bulletMsgContainer; // @synthesize bulletMsgContainer=_bulletMsgContainer;
@property(retain, nonatomic) UIView *conditionViewWithSpace; // @synthesize conditionViewWithSpace=_conditionViewWithSpace;
@property(retain, nonatomic) UIView *conditonViewContainer; // @synthesize conditonViewContainer=_conditonViewContainer;
@property(retain, nonatomic) UILabel *onlyLabel; // @synthesize onlyLabel=_onlyLabel;
@property(retain, nonatomic) MMWebImageView *userImgView; // @synthesize userImgView=_userImgView;
@property(retain, nonatomic) UIImageView *lockImgView; // @synthesize lockImgView=_lockImgView;
- (id)verticalAlignArrary;
- (double)verticalAlignCenterY;
- (void)onRightBtnClicked:(id)arg1;
- (void)configureWithCellModel:(id)arg1;
- (void)setUpConditionViewWithModel:(id)arg1 conditionMaxWidth:(double)arg2;
- (id)myGroupCellLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

