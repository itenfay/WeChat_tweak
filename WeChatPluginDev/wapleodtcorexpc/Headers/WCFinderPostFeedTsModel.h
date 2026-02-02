//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPostFeedTsModel : NSObject
{
    NSString *_feedId;
    long long _timeStamp;
    long long _useCount;
}

+ (_Bool)checkLatestPostDataItem:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_useCount;
+ (void)PBArrayAdd_timeStamp;
+ (void)PBArrayAdd_feedId;
- (void).cxx_destruct;
@property(nonatomic) long long useCount; // @synthesize useCount=_useCount;
@property(nonatomic) long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

