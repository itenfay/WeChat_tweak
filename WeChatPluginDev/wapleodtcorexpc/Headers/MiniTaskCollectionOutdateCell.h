//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, UIImageView, UIView;

@interface MiniTaskCollectionOutdateCell
{
    UIImageView *_coverImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    UIImageView *_bizIconView;
    MMUIButton *_favButton;
    MMUIButton *_deleteButton;
    UIView *_bottomLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) MMUIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) MMUIButton *favButton; // @synthesize favButton=_favButton;
@property(retain, nonatomic) UIImageView *bizIconView; // @synthesize bizIconView=_bizIconView;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void)onSelectAtFav;
- (void)onSelectAtClose;
- (void)prepareForReuse;
- (void)setIsEditing:(_Bool)arg1;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)setupLayout;
- (void)initUI;
- (struct CGRect)menuPopoverFrame;
- (id)snapShotView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

