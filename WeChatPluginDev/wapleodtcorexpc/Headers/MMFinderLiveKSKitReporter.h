//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveKSKitReporter : NSObject
{
}

- (id)replaceCommaToSemicolon:(id)arg1;
- (void)reportEvent:(id)arg1 andParams:(id)arg2;
- (void)dealloc;
- (void)reportManager:(id)arg1 didReceiveEvent:(id)arg2 andParams:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

