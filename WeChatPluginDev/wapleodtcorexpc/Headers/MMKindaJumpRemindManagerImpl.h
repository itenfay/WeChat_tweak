//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMVoidBoolStringCallback, NSString, WCPayJumpRemindControlLogic;

@interface MMKindaJumpRemindManagerImpl : NSObject
{
    MMVoidBoolStringCallback *_m_interruptCb;
    MMVoidBoolStringCallback *_m_continueCb;
    WCPayJumpRemindControlLogic *_m_jumpRemindControlLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayJumpRemindControlLogic *m_jumpRemindControlLogic; // @synthesize m_jumpRemindControlLogic=_m_jumpRemindControlLogic;
@property(retain, nonatomic) MMVoidBoolStringCallback *m_continueCb; // @synthesize m_continueCb=_m_continueCb;
@property(retain, nonatomic) MMVoidBoolStringCallback *m_interruptCb; // @synthesize m_interruptCb=_m_interruptCb;
- (void)onDestroyJumpRemindManager;
- (void)jumpRemindImpl:(id)arg1 clientScene:(int)arg2 payScene:(int)arg3 interruptCb:(id)arg4 continueCb:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

