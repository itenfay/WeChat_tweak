//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, UIButton, UIImageView, UIView;

@interface MMFinderScreenRecordGuideView
{
    CDUnknownBlockType _actionBlock;
    UIView *_contentView;
    UIView *_headerView;
    UIImageView *_guideImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_detailLabel;
    UIButton *_cancelButton;
    MMUIButton *_detailButton;
    UIButton *_actionButton;
    unsigned long long _actionType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *guideImageView; // @synthesize guideImageView=_guideImageView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (void)layoutUI;
- (void)createUI;
- (void)pageSheetDidDismiss;
- (void)showWithAnimated:(_Bool)arg1;
- (void)detailClick;
- (void)actionClick;
- (void)cancelClick;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

