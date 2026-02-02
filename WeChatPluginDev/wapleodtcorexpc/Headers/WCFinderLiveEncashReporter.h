//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLiveEncashReporter : NSObject
{
    NSString *m_encashSessionId;
    long long m_lastSceneType;
}

- (void).cxx_destruct;
- (void)reportEncashAction:(unsigned long long)arg1 withSceneType:(long long)arg2;
- (void)onEncashAction:(unsigned long long)arg1;
- (void)openEncashPage;
- (void)unRegisterExtension;
- (void)registerExtension;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

