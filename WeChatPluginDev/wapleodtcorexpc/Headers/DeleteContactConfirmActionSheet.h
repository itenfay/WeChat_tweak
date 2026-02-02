//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, UIButton;

@interface DeleteContactConfirmActionSheet
{
    CDUnknownBlockType _confirmBlock;
    CContact *_contact;
    UIButton *_checkBox;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *checkBox; // @synthesize checkBox=_checkBox;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
- (void)onConfirm;
- (void)onCheckBoxClicked:(id)arg1;
- (void)initView;
- (id)initWithContact:(id)arg1;

@end

