//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JumpInfo, MMWebImageView, UIButton, UILabel, UIView;

@interface GCTeamUpCell
{
    UIView *_containerView;
    MMWebImageView *_backGroundImgView;
    UILabel *_topLabel;
    UILabel *_midLabel;
    MMWebImageView *_bottomImgView;
    UILabel *_bottomLabel;
    UIButton *_rightBtn;
    JumpInfo *_jumpInfo;
    UIView *_labelGroupView;
}

+ (void)onCalculatLayoutInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *labelGroupView; // @synthesize labelGroupView=_labelGroupView;
@property(retain, nonatomic) JumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) MMWebImageView *bottomImgView; // @synthesize bottomImgView=_bottomImgView;
@property(retain, nonatomic) UILabel *midLabel; // @synthesize midLabel=_midLabel;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) MMWebImageView *backGroundImgView; // @synthesize backGroundImgView=_backGroundImgView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)configureWithCellModel:(id)arg1;
- (_Bool)shouldBubbleViewClipsToBounds;
- (id)initWithFrame:(struct CGRect)arg1;

@end

