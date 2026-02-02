//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderBaseIntent : NSObject
{
}

- (void)dealloc;
- (_Bool)clearIntent;
- (_Bool)bindPreviousIntent:(id)arg1;
- (id)traceValByKey:(id)arg1;
- (id)getValByKey:(id)arg1;
- (void)putKey:(id)arg1 andVal:(id)arg2;
- (id)hashIntent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

