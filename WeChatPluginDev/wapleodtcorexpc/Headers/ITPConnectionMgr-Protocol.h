//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TPConnectionNode;
@protocol ITPPlayer;

@protocol ITPConnectionMgr <NSObject>
- (void)deactiveAllConnections;
- (void)deactiveConnection:(int)arg1;
- (int)activeAllConnections;
- (int)activeConnection:(int)arg1;
- (void)removeConnection:(int)arg1;
- (int)addConnectionWithPlayer1:(id <ITPPlayer>)arg1 actions1:(TPConnectionNode *)arg2 player2:(id <ITPPlayer>)arg3 actions2:(TPConnectionNode *)arg4;
@end

