//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderJumpInfoLiteAppCallBackInfo : NSObject
{
    int _callbackId;
    unsigned long long _instanceId;
    NSString *_storeAppId;
    NSString *_appId;
    NSString *_actionName;
    NSObject *_storeData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *storeData; // @synthesize storeData=_storeData;
@property(copy, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *storeAppId; // @synthesize storeAppId=_storeAppId;
@property(nonatomic) unsigned long long instanceId; // @synthesize instanceId=_instanceId;
@property(nonatomic) int callbackId; // @synthesize callbackId=_callbackId;

@end

