//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface KindaLogService : NSObject
{
}

- (void)error:(id)arg1 content:(id)arg2;
- (void)warning:(id)arg1 content:(id)arg2;
- (void)info:(id)arg1 content:(id)arg2;
- (void)debug:(id)arg1 content:(id)arg2;
- (void)verbose:(id)arg1 content:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

