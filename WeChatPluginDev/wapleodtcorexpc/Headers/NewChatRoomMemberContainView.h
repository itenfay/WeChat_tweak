//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSMutableArray, NSString, WCColorProxy;
@protocol ChatRoomMemberGridViewDelegate;

@interface NewChatRoomMemberContainView
{
    NSMutableArray *m_arrItemViews;
    CContact *m_groupContact;
    unsigned long long m_column;
    double m_margin;
    double m_fHeadWidth;
    double m_fNameSize;
    _Bool m_bDeleteStatue;
    _Bool _wrapItemAccessibilityElement;
    _Bool _isShowOpenIMTypeInGroupContact;
    unsigned int _m_scence;
    id <ChatRoomMemberGridViewDelegate> m_delegate;
    WCColorProxy *_colorProxy;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowOpenIMTypeInGroupContact; // @synthesize isShowOpenIMTypeInGroupContact=_isShowOpenIMTypeInGroupContact;
@property(retain, nonatomic) WCColorProxy *colorProxy; // @synthesize colorProxy=_colorProxy;
@property(nonatomic) _Bool wrapItemAccessibilityElement; // @synthesize wrapItemAccessibilityElement=_wrapItemAccessibilityElement;
@property(nonatomic) unsigned int m_scence; // @synthesize m_scence=_m_scence;
@property(retain, nonatomic) CContact *groupContact; // @synthesize groupContact=m_groupContact;
@property(nonatomic) _Bool m_bDeleteStatue; // @synthesize m_bDeleteStatue;
@property(nonatomic) __weak id <ChatRoomMemberGridViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)onLongPressEx:(id)arg1;
- (void)setShowRemoveMember;
- (void)onDeleteMember:(id)arg1;
- (void)onAddMember:(id)arg1;
- (void)openContactInfo:(id)arg1;
- (id)getViewController;
- (void)updateSubViewWithContacts:(id)arg1 editBtn:(unsigned long long)arg2 withTrackUserNameList:(id)arg3 withTalkList:(id)arg4;
- (_Bool)showTrackFlag:(id)arg1 contact:(id)arg2 trackUserNameList:(id)arg3;
- (id)getItemAt:(unsigned int)arg1;
- (void)layoutSubviews;
- (double)getCenterX:(unsigned long long)arg1 itemView:(id)arg2;
- (void)addItemView:(id)arg1;
- (void)updateColumn:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 column:(unsigned long long)arg2 headWidth:(double)arg3 nameSize:(double)arg4;
- (id)initWithFrame:(struct CGRect)arg1 column:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

