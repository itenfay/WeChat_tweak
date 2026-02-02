//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMCPLabel, MMHeadImageView, NSString, UIButton, UIColor, UIImageView;
@protocol NewChatRoomMemberItemViewDelegate;

@interface NewChatRoomMemberItemView
{
    UIButton *m_addMemberBtn;
    UIButton *m_deleteMemberBtn;
    UIButton *m_actionBtn;
    MMHeadImageView *m_headImageView;
    MMCPLabel *m_labelDisplayName;
    MMCPLabel *m_labelSubDesc;
    UIImageView *m_trackIcon;
    UIButton *m_smallDeleteBtn;
    CContact *m_contact;
    CContact *m_groupContact;
    id <NewChatRoomMemberItemViewDelegate> m_delegate;
    SEL m_updateItemViewForDeleteSel;
    _Bool m_bDeleteStatus;
    unsigned int m_uiIndex;
    UIColor *m_textColor;
    double m_fLeftMargin;
    double m_fRightMargin;
    _Bool m_noDisplayName;
    NSString *m_cpKeyForNickname;
    NSString *m_cpKeyForChatRoomDisplayName;
    _Bool m_isNickNameUnsafe;
    _Bool m_isChatRoomDisplayNameUnsafe;
    _Bool _wrapItemAccessibilityElement;
    _Bool _isShowOpenIMTypeInGroupContact;
    unsigned int _m_scence;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowOpenIMTypeInGroupContact; // @synthesize isShowOpenIMTypeInGroupContact=_isShowOpenIMTypeInGroupContact;
@property(nonatomic) _Bool wrapItemAccessibilityElement; // @synthesize wrapItemAccessibilityElement=_wrapItemAccessibilityElement;
@property(nonatomic) unsigned int m_scence; // @synthesize m_scence=_m_scence;
@property(readonly) double m_fRightMargin; // @synthesize m_fRightMargin;
@property(readonly) double m_fLeftMargin; // @synthesize m_fLeftMargin;
@property(nonatomic) unsigned int m_uiIndex; // @synthesize m_uiIndex;
@property(retain, nonatomic) CContact *m_groupContact; // @synthesize m_groupContact;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(nonatomic) __weak id <NewChatRoomMemberItemViewDelegate> m_delegate; // @synthesize m_delegate;
- (_Bool)isDisplayNameUnsafe;
- (void)updateCPState;
- (void)setNoDisplayName:(_Bool)arg1;
- (id)initViewInChatRoomProfile:(double)arg1 nameSize:(double)arg2;
- (id)initViewInChatRoomProfile;
- (void)updateContactItemSubview;
- (void)updateWithDeleteMemberBtnAtIndexEx:(unsigned long long)arg1 withColumn:(unsigned long long)arg2;
- (void)updateWithAddMemberBtnAtIndexEx:(unsigned long long)arg1 withColumn:(unsigned long long)arg2;
- (void)updateWithContactEx:(id)arg1 atIndex:(unsigned long long)arg2 withColumn:(unsigned long long)arg3;
- (void)hiddenAllSubViews;
- (void)updateAtIndexEx:(unsigned long long)arg1 withColumn:(unsigned long long)arg2;
- (void)handleLongPressEx:(id)arg1;
- (void)showTrackFlag;
- (void)updateOpenim;
- (void)setTextColor:(id)arg1 shadowColor:(id)arg2;
- (void)updateItemViewForDelete:(_Bool)arg1;
- (void)updateContactItemViewForDelete;
- (void)updateDeleteItemViewForDelete;
- (void)updateAddItemViewForDelete;
- (void)updateContact;
- (id)headImageView;
- (void)shakeHeadForType:(unsigned long long)arg1;
- (void)OnClickDeleteBtn;
- (void)OnClickHeadImage;

@end

