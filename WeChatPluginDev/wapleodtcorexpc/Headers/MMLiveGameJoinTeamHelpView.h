//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, UIView;
@protocol MMLiveGameJoinTeamHelpViewDelegate;

@interface MMLiveGameJoinTeamHelpView
{
    _Bool _model;
    id <MMLiveGameJoinTeamHelpViewDelegate> _delegate;
    UIView *_contentView;
    UIView *_topAreaView;
    MMUIButton *_leftButton;
    MMUILabel *_titleLabel;
    MMUILabel *_helperLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool model; // @synthesize model=_model;
@property(retain, nonatomic) MMUILabel *helperLabel; // @synthesize helperLabel=_helperLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIView *topAreaView; // @synthesize topAreaView=_topAreaView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <MMLiveGameJoinTeamHelpViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)leftButtonAction;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 model:(_Bool)arg2;

@end

