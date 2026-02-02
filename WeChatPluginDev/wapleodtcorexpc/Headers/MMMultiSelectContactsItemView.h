//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ContactsItemView, UIImageView;

@interface MMMultiSelectContactsItemView
{
    _Bool _isAllowMultiSelect;
    CContact *_contact;
    UIImageView *_checkMarkImgView;
    ContactsItemView *_contactItemView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ContactsItemView *contactItemView; // @synthesize contactItemView=_contactItemView;
@property(retain, nonatomic) UIImageView *checkMarkImgView; // @synthesize checkMarkImgView=_checkMarkImgView;
@property(nonatomic) _Bool isAllowMultiSelect; // @synthesize isAllowMultiSelect=_isAllowMultiSelect;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (id)getCheckMarkImageWithContactState:(unsigned long long)arg1;
- (void)updateItemView:(id)arg1 andContactState:(unsigned long long)arg2;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 andContact:(id)arg2 andIsAllowMultiSelect:(_Bool)arg3;

@end

