//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UILabel;

@interface WNAttachmentListPrefixView
{
    UIButton *_checkBtn;
    UILabel *_listLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *listLabel; // @synthesize listLabel=_listLabel;
@property(retain, nonatomic) UIButton *checkBtn; // @synthesize checkBtn=_checkBtn;
- (void)updateCheck;
- (void)checkBtnClicked;
- (void)layoutView;
- (void)onClickObject;

@end

