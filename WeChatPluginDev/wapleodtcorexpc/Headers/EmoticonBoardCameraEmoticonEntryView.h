//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UIImageView, UILabel, UIView;
@protocol EmoticonBoardCameraEmoticonEntryViewDelegate;

@interface EmoticonBoardCameraEmoticonEntryView
{
    _Bool shouldShowNewYearUI;
    id <EmoticonBoardCameraEmoticonEntryViewDelegate> _delegate;
    UIView *_contentView;
    UIButton *_actionButton;
    UIImageView *_effectView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <EmoticonBoardCameraEmoticonEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCameraEmoticonCreateButtonClicked;
- (void)refreshView;
- (void)addNewYearEffect;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

