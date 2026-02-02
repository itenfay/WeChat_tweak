//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WACgiService : NSObject
{
}

+ (void)invalidateAllRequest;
+ (void)cancelCgiRequest:(unsigned int)arg1;
+ (unsigned int)genServiceRouteCgiSerialNum;
+ (unsigned int)sendCgiToService:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)checkShouldRouteToServiceWhenWeakNet:(id)arg1;
+ (unsigned int)sendCgiDirectlyWithoutServiceRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (unsigned int)sendCgi:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)setExternalIMP:(Class)arg1;
+ (Class)externalIMP;

@end

