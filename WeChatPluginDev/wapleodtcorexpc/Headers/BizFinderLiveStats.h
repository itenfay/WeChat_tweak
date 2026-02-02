//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface BizFinderLiveStats : NSObject
{
    NSNumber *_finderObjId;
    NSNumber *_liveId;
    NSString *_username;
    NSNumber *_onlineCount;
    NSNumber *_liveStatus;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithFinderObjId:(id)arg1 liveId:(id)arg2 username:(id)arg3 onlineCount:(id)arg4 liveStatus:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *liveStatus; // @synthesize liveStatus=_liveStatus;
@property(retain, nonatomic) NSNumber *onlineCount; // @synthesize onlineCount=_onlineCount;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSNumber *liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) NSNumber *finderObjId; // @synthesize finderObjId=_finderObjId;
- (id)toList;

@end

