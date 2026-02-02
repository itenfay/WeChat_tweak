//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCheckBox, MMTableView, MMUIButton, NSString, RichTextView, UILabel, UIView, ZZFLEXAngel;

@interface WAAuthPageSheetUserIdView
{
    UIView *_auiView;
    UILabel *_idLabel;
    UILabel *_phoneTitleLabel;
    MMTableView *_phoneView;
    ZZFLEXAngel *_phoneAngel;
    MMUIButton *_managerButton;
    UIView *_protocolView;
    MMCheckBox *_protocolJumpCheckBox;
    RichTextView *_protocolJumpRichText;
}

+ (double)tableViewHeightByDataModel:(id)arg1 hostView:(id)arg2;
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *protocolJumpRichText; // @synthesize protocolJumpRichText=_protocolJumpRichText;
@property(retain, nonatomic) MMCheckBox *protocolJumpCheckBox; // @synthesize protocolJumpCheckBox=_protocolJumpCheckBox;
@property(retain, nonatomic) UIView *protocolView; // @synthesize protocolView=_protocolView;
@property(retain, nonatomic) MMUIButton *managerButton; // @synthesize managerButton=_managerButton;
@property(retain, nonatomic) ZZFLEXAngel *phoneAngel; // @synthesize phoneAngel=_phoneAngel;
@property(retain, nonatomic) MMTableView *phoneView; // @synthesize phoneView=_phoneView;
@property(retain, nonatomic) UILabel *phoneTitleLabel; // @synthesize phoneTitleLabel=_phoneTitleLabel;
@property(retain, nonatomic) UILabel *idLabel; // @synthesize idLabel=_idLabel;
@property(retain, nonatomic) UIView *auiView; // @synthesize auiView=_auiView;
- (id)pageInfo;
- (id)pageSheet;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setViewDataModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

