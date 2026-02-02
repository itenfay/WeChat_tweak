//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, UIView;

@interface WCFinderLiveStarterRecordLiveGuideView
{
    CDUnknownBlockType _recordGuideBlock;
    UIView *_contentView;
    MMUILabel *_titleLabel;
    MMUIButton *_editButton;
    MMUIButton *_actionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType recordGuideBlock; // @synthesize recordGuideBlock=_recordGuideBlock;
- (void)editButtonClick;
- (void)actionButtonClick;
- (double)contentViewHeight;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithTitle:(id)arg1;

@end

