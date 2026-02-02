//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel, UITextField;

@interface GCKeyValueSettingCell
{
    UILabel *_titleLabel;
    UITextField *_textFiled;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITextField *textFiled; // @synthesize textFiled=_textFiled;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)configureWithCellModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

