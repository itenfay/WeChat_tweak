//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString, RichTextView, UIImageView;
@protocol ChatRoomInvitationCellQuitRoomInfoViewDelegate;

@interface ChatRoomInvitationCellQuitRoomInfoView
{
    id <ChatRoomInvitationCellQuitRoomInfoViewDelegate> _delegate;
    CContact *_contact;
    NSString *_quitRoomInfo;
    UIImageView *_iconView;
    RichTextView *_quitRoomInfoLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *quitRoomInfoLabel; // @synthesize quitRoomInfoLabel=_quitRoomInfoLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) NSString *quitRoomInfo; // @synthesize quitRoomInfo=_quitRoomInfo;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <ChatRoomInvitationCellQuitRoomInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)setupLayout;
- (void)initView;
- (id)initWithContact:(id)arg1 quitRoomInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

