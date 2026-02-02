//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MessagePatternCacheMgr : NSObject
{
    NSMutableDictionary *m_dicCache;
    NSObject<OS_dispatch_queue> *m_worker;
}

- (void).cxx_destruct;
- (void)OnMemoryWarning;
- (void)onFontSizeChange;
- (void)onLanguageChange;
- (void)oniOS7FontChange;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (void)SaveCache:(id)arg1;
- (void)SetMsgPattern:(id)arg1 MsgWrap:(id)arg2;
- (id)GetMsgPattern:(id)arg1 MsgWrap:(id)arg2;
- (void)ClearAllCache;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

