//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, UIColor;
@protocol InviteFriendLogicDelegate;

@interface InviteFriendLogic : NSObject
{
    id <InviteFriendLogicDelegate> m_delegate;
    NSMutableDictionary *m_dicMsg;
    NSMutableDictionary *m_dicSubject;
    _Bool m_bDefaultWording;
    UIColor *m_oldBarTintColor;
    NSDictionary *m_oldTitleTextAttributes;
    long long m_oldUIBarStyle;
    unsigned int _fromScene;
}

+ (_Bool)isShowWhatsapp;
+ (_Bool)isShowSMS;
+ (_Bool)isShowEmail;
+ (_Bool)isShowInvite;
+ (_Bool)isEntryOnTheTop;
+ (_Bool)isShowEntryInContactList;
+ (_Bool)isShowEntryInMainFrame;
- (void).cxx_destruct;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
- (void)reportInvitationSendStatus:(unsigned int)arg1 result:(_Bool)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetMsg:(id)arg1;
- (void)startAgain:(id)arg1;
- (void)updateWording:(unsigned int)arg1;
- (void)startInviteWhatsapp;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)startInviteMessage;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)startInviteEmail;
- (void)recoverOldSetting;
- (void)saveOldSetting;
- (id)getSubject:(unsigned int)arg1;
- (id)getInviteSources;
- (id)getMsg:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

