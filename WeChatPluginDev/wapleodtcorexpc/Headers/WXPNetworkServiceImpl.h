//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WXPNetworkServiceImpl : NSObject
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned long long)getCgiNewDNSBusinessType:(id)arg1;
- (void)invoke:(id)arg1 mockManager:(id)arg2;
- (id)getBaseRequest:(int)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

