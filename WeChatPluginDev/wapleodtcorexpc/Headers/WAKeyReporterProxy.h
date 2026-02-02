//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAKeyReporterProxy : NSObject
{
}

+ (void)logFeatureExtIDkeyList:(const void *)arg1 isKeyLog:(_Bool)arg2;
+ (void)logFeatureExtIDkey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3 isKeyLog:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

