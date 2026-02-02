//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, ForwardMessageLogicController, NSString;
@protocol MMDropDelegate;

@interface MMDropManager : NSObject
{
    ForwardMessageLogicController *m_forwardLogicController;
    CContact *_m_contact;
    id <MMDropDelegate> _dropDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMDropDelegate> dropDelegate; // @synthesize dropDelegate=_dropDelegate;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact=_m_contact;
- (id)videoMsgWith:(id)arg1;
- (id)imageMsgWith:(id)arg1;
- (id)getCurrentViewController;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)showConfirmView:(id)arg1;
- (id)getSavePathWithFileSuffix:(id)arg1;
- (_Bool)isValidContactForDrop:(id)arg1;
- (void)handleDropItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

