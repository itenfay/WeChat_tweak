//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, PrepareFinder, WCFinderContact, WCFinderUserMessage;

@interface WCFinderPersonalContactModel : NSObject
{
    WCFinderContact *_contact;
    PrepareFinder *_prepare;
    WCFinderUserMessage *_userMessage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderUserMessage *userMessage; // @synthesize userMessage=_userMessage;
@property(retain, nonatomic) PrepareFinder *prepare; // @synthesize prepare=_prepare;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (void)onFinderNotifyMemberUnreadMentionCountNeedReloadWithUsername:(id)arg1;
- (void)onFinderNotifyUnreadMentionCountNeedReloadWithUsername:(id)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (id)finderMsgRedDotInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

