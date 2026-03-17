//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface KindaPlatformUIRouter : NSObject
{
}

- (void)openUrlScheme:(id)arg1;
- (void)jointpayGotoExternApp:(id)arg1 errcode:(int)arg2 returnKey:(id)arg3 universalLink:(id)arg4 contextID:(id)arg5 needToken:(int)arg6 needShowPage:(int)arg7 openApiParam:(id)arg8;
- (void)gotoExternApp:(id)arg1 errcode:(int)arg2 returnKey:(id)arg3 universalLink:(id)arg4 contextID:(id)arg5 needToken:(int)arg6 needShowPage:(int)arg7 openApiParam:(id)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

