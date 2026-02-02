//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHeadImageView, MMUIButton, MMUILabel, UIView;

@interface MiniTaskCollectionScheduleCell
{
    MMUILabel *_contentLabel;
    MMUILabel *_nameLabel;
    MMHeadImageView *_headImageView;
    MMUILabel *_remindTimeLabel;
    MMUIButton *_remindButton;
    MMUIButton *_deleteButton;
    UIView *_separatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) MMUIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) MMUIButton *remindButton; // @synthesize remindButton=_remindButton;
@property(retain, nonatomic) MMUILabel *remindTimeLabel; // @synthesize remindTimeLabel=_remindTimeLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void)onDeleteMenuClick:(id)arg1;
- (void)onDeleteButtonClick:(id)arg1;
- (void)onRemindButtonClick:(id)arg1;
- (id)getContactDisplayName:(id)arg1;
- (void)layoutSubviews;
- (void)setupLayout;
- (void)initUI;
- (void)setIsEditing:(_Bool)arg1;
- (void)setViewModel:(id)arg1;
- (id)menuItems;
- (struct CGRect)menuPopoverFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end

