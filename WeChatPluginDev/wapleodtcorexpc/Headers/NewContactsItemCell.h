//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactsItemView, NSString;

@interface NewContactsItemCell
{
    ContactsItemView *m_contactsItemView;
    _Bool _m_bHideOpenIMDesc;
    _Bool _bAlwayShowDefaultImage;
    _Bool _bShowTextState;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bShowTextState; // @synthesize bShowTextState=_bShowTextState;
@property(nonatomic) _Bool bAlwayShowDefaultImage; // @synthesize bAlwayShowDefaultImage=_bAlwayShowDefaultImage;
@property(nonatomic) _Bool m_bHideOpenIMDesc; // @synthesize m_bHideOpenIMDesc=_m_bHideOpenIMDesc;
- (void)updateWithContact:(id)arg1;
- (void)prepareForReuse;
@property(readonly, nonatomic) ContactsItemView *contactsItemView;
- (void)initContactItemView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

