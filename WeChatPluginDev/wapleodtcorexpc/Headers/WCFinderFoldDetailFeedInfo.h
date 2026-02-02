//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderFoldDetailFeedInfo : NSObject
{
    NSString *_feedTid;
    unsigned long long _exposeTimeStamp;
    unsigned long long _clickTimeStamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long clickTimeStamp; // @synthesize clickTimeStamp=_clickTimeStamp;
@property(nonatomic) unsigned long long exposeTimeStamp; // @synthesize exposeTimeStamp=_exposeTimeStamp;
@property(copy, nonatomic) NSString *feedTid; // @synthesize feedTid=_feedTid;

@end

