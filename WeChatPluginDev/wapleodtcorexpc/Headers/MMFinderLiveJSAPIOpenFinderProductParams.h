//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveJSAPIOpenFinderProductParams : NSObject
{
    NSString *_appId;
    unsigned long long _productId;
    NSString *_finderUsername;
    NSString *_ecSource;
    NSString *_entranceGMsgID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *entranceGMsgID; // @synthesize entranceGMsgID=_entranceGMsgID;
@property(copy, nonatomic) NSString *ecSource; // @synthesize ecSource=_ecSource;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) unsigned long long productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;

@end

