//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface KindaTenpayCgi : NSObject
{
    NSMutableDictionary *_runningCgiMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *runningCgiMap; // @synthesize runningCgiMap=_runningCgiMap;
- (void)request:(int)arg1 url:(id)arg2 reqText:(id)arg3 reqTextWx:(id)arg4 callback:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

