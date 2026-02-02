//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderTopicStoreInfo : NSObject
{
    unsigned long long _topicId;
    NSString *_topic;
}

+ (id)fromTopicInfoList:(id)arg1;
+ (id)fromTopicInfo:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_topic;
+ (void)PBArrayAdd_topicId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) unsigned long long topicId; // @synthesize topicId=_topicId;
- (id)converTopicInfo;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

