//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface AffFinderCppToNativeManagerImpl : NSObject
{
}

- (int)getSafeCacheTimeWithTimestamp:(double)arg1;
- (id)getFinderSyncClientInfo;
- (id)getFinderBaseReq:(int)arg1 syncScene:(int)arg2 cmdId:(int)arg3;
- (id)findShowInfoByPath:(id)arg1;
- (id)getFinderCtrlInfoByKeyPath:(id)arg1;
- (id)getLocation:(int)arg1;
- (id)getMultiFinderUserNames;
- (id)getFinderUserName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

