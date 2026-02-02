//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIButton;
@protocol ContactTagListBottomBarDelegate;

@interface ContactTagListBottomBar
{
    _Bool _isEditing;
    UIButton *_createTagButton;
    UIButton *_editTagsButton;
    UIButton *_moveToButton;
    UIButton *_deleteButton;
    id <ContactTagListBottomBarDelegate> _m_delegate;
    MMUILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) __weak id <ContactTagListBottomBarDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIButton *moveToButton; // @synthesize moveToButton=_moveToButton;
@property(retain, nonatomic) UIButton *editTagsButton; // @synthesize editTagsButton=_editTagsButton;
@property(retain, nonatomic) UIButton *createTagButton; // @synthesize createTagButton=_createTagButton;
- (void)onDelete;
- (void)onMoveTo;
- (void)onEditTags;
- (void)onCreateTag;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (void)reloadView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

