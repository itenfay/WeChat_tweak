//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactTagData, MMUIButton, MMUILabel, NSAttributedString, NSString, UIImageView;

@interface ContactTagListTableViewCell
{
    _Bool _showMemberList;
    _Bool _showSelectControl;
    _Bool _isSelected;
    _Bool _isSelectDisabled;
    _Bool _isDeselectDisabled;
    _Bool _isSnapshotMode;
    NSString *_tagName;
    NSAttributedString *_attributeTagName;
    NSString *_memberCountText;
    NSString *_memberListText;
    ContactTagData *_tagData;
    MMUILabel *_titleLabel;
    MMUILabel *_memberCountLabel;
    MMUILabel *_detailLabel;
    UIImageView *_selectIconView;
    MMUIButton *_renameButton;
    double _titleHeight;
    double _detailHeight;
}

+ (double)descLabelFontSize;
- (void).cxx_destruct;
@property(nonatomic) double detailHeight; // @synthesize detailHeight=_detailHeight;
@property(nonatomic) double titleHeight; // @synthesize titleHeight=_titleHeight;
@property(retain, nonatomic) MMUIButton *renameButton; // @synthesize renameButton=_renameButton;
@property(retain, nonatomic) UIImageView *selectIconView; // @synthesize selectIconView=_selectIconView;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *memberCountLabel; // @synthesize memberCountLabel=_memberCountLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak ContactTagData *tagData; // @synthesize tagData=_tagData;
@property(nonatomic) _Bool isSnapshotMode; // @synthesize isSnapshotMode=_isSnapshotMode;
@property(nonatomic) _Bool isDeselectDisabled; // @synthesize isDeselectDisabled=_isDeselectDisabled;
@property(nonatomic) _Bool isSelectDisabled; // @synthesize isSelectDisabled=_isSelectDisabled;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool showSelectControl; // @synthesize showSelectControl=_showSelectControl;
@property(nonatomic) _Bool showMemberList; // @synthesize showMemberList=_showMemberList;
@property(retain, nonatomic) NSString *memberListText; // @synthesize memberListText=_memberListText;
@property(retain, nonatomic) NSString *memberCountText; // @synthesize memberCountText=_memberCountText;
@property(retain, nonatomic) NSAttributedString *attributeTagName; // @synthesize attributeTagName=_attributeTagName;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
- (struct CGRect)getReorderControlFrame;
- (void)customTableViewCellRecorderControl;
- (void)onRename;
- (void)layoutSubviews;
- (void)updateView;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

