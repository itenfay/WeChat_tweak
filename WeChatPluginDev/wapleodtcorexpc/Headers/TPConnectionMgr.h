//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TPThumbPlayerConnectionMgrWrapper;

@interface TPConnectionMgr : NSObject
{
    TPThumbPlayerConnectionMgrWrapper *_connectionMgrWrapper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPThumbPlayerConnectionMgrWrapper *connectionMgrWrapper; // @synthesize connectionMgrWrapper=_connectionMgrWrapper;
- (void)removeConnection:(int)arg1;
- (void)deactiveConnection:(int)arg1;
- (void)deactiveAllConnections;
- (int)addConnectionWithPlayer1:(id)arg1 actions1:(id)arg2 player2:(id)arg3 actions2:(id)arg4;
- (int)activeConnection:(int)arg1;
- (int)activeAllConnections;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

