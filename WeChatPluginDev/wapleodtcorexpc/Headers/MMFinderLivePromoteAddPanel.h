//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIButton, UIView;

@interface MMFinderLivePromoteAddPanel
{
    CDUnknownBlockType _addButtonBlock;
    UIButton *_actionButton;
    MMUILabel *_titleLabel;
    MMUILabel *_subtitleLabel;
    UIView *_contentView;
    long long _previousOrientation;
}

- (void).cxx_destruct;
@property(nonatomic) long long previousOrientation; // @synthesize previousOrientation=_previousOrientation;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(copy, nonatomic) CDUnknownBlockType addButtonBlock; // @synthesize addButtonBlock=_addButtonBlock;
- (void)addButtonClicked:(id)arg1;
- (id)getCurrentLeftButton;
- (void)leftButtonAction;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)pageSheetDidRotation;
- (double)contentViewHeight;
- (void)createUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

