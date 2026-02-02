//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CPushContact, NSMutableArray, NSString;

@interface RedesignHelloMsgsPanelView : UIView
{
    NSMutableArray *m_arrHellos;
    CPushContact *m_lastMsg;
    id m_replyTarget;
    SEL m_replySel;
    NSString *_nsChatName;
    NSString *_nsUserName;
}

+ (id)getHelloMsgArrayContacts:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nsUserName; // @synthesize nsUserName=_nsUserName;
@property(retain, nonatomic) NSString *nsChatName; // @synthesize nsChatName=_nsChatName;
- (void)onLongPressMenuViewCopy:(id)arg1;
- (void)onReply:(id)arg1;
- (void)setRelpyTarget:(id)arg1 sel:(SEL)arg2;
- (void)createHelloMsgPanelView;
- (id)initWithFrame:(struct CGRect)arg1 Contact:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

