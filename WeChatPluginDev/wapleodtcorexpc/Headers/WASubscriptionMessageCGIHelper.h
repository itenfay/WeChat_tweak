//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WASubscriptionMessageCGIHelper : NSObject
{
}

+ (id)subscribeStatusWith:(id)arg1;
+ (id)generateItemListWith:(id)arg1;
+ (id)commonErrorCheckWithResponse:(id)arg1;
+ (id)errorWithRet:(int)arg1 uiMessage:(unsigned int)arg2 response:(id)arg3;
+ (id)errorWithRet:(int)arg1 response:(id)arg2;
+ (void)sendRequestSubscribeCGIWith:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
+ (void)sendRequestListByIDCGIWith:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;

@end

