//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString;

@interface WCPayGPSelectMemberCellView
{
    _Bool _disableSelect;
    CContact *_contact;
    CContact *_chatroomContact;
    NSString *_comment;
}

+ (double)calcHeightForCellWithContact:(id)arg1 chatroomContact:(id)arg2 comment:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool disableSelect; // @synthesize disableSelect=_disableSelect;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) CContact *chatroomContact; // @synthesize chatroomContact=_chatroomContact;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void)setupContentView;
- (id)initWithFrame:(struct CGRect)arg1 contact:(id)arg2 chatroomContact:(id)arg3 comment:(id)arg4 disableSelect:(_Bool)arg5;

@end

