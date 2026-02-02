//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;
@protocol ChatroomProfileViewLayoutDelegate;

@interface ChatroomProfileView
{
    NSArray *m_arrContacts;
    _Bool _wrapItemAccessibilityElement;
    id <ChatroomProfileViewLayoutDelegate> _layoutDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ChatroomProfileViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) _Bool wrapItemAccessibilityElement; // @synthesize wrapItemAccessibilityElement=_wrapItemAccessibilityElement;
- (void)openContactInfo:(id)arg1;
- (double)getMemberItemViewWitdh;
- (double)getProfileViewCellLeftMargin;
- (double)getProfileViewNameFontSize;
- (double)getProfileViewRowHeight;
- (double)getProfileViewHeadInnerMargin;
- (double)getProfileViewLeftRightMargin;
- (double)getProfileViewHeadLength;
- (double)getMemberViewHeight;
- (unsigned long long)getMemberViewRowCount;
- (unsigned long long)getMemberViewColumnCount;
- (void)makeMemListSection:(id)arg1;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (void)initMemberView;
- (void)updateContactList:(id)arg1 delegate:(id)arg2;
- (void)updateContactList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

