//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, SessionReportInfo;

@interface FindFriendBussReporter : NSObject
{
    SessionReportInfo *m_info;
}

- (void).cxx_destruct;
- (void)report:(unsigned int)arg1;
- (void)onAppearPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onEnterBackground;
- (void)resetInfo;
- (void)exitFindFriends:(id)arg1;
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

