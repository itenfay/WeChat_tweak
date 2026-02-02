//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSData, NSString;

@interface WCFinderLiveGetDeliveryDetailRequestModel : NSObject
{
    unsigned int _cmdId;
    MMFinderLiveTaskId *_liveTaskId;
    NSString *_finderUsername;
    NSData *_liveCookies;
    unsigned long long _objectId;
    unsigned long long _liveId;
    NSString *_objectNonceId;
    NSData *_reqBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *reqBuffer; // @synthesize reqBuffer=_reqBuffer;
@property(nonatomic) unsigned int cmdId; // @synthesize cmdId=_cmdId;
@property(retain, nonatomic) NSString *objectNonceId; // @synthesize objectNonceId=_objectNonceId;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;

@end

