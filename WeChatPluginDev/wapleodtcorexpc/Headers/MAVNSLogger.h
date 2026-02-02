//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MAVNSLogger : NSObject
{
}

+ (void)setup;
- (void)mavLogError:(id)arg1;
- (void)mavLogWarning:(id)arg1;
- (void)mavLogDebug:(id)arg1;
- (void)mavLogInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

