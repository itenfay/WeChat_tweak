//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAHandOffProxy : NSObject
{
}

+ (void)removeCurrentHandOffItem;
+ (void)tryOpenCurrentHandOffWithTask:(id)arg1 handoffId:(id)arg2 withAppPath:(id)arg3 withActioId:(long long)arg4;
+ (void)trySetCurrentHandOffWithTask:(id)arg1 handoffId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

