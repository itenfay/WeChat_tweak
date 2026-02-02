//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJTemplateFinderEventTopicInfo : NSObject
{
    NSString *_creatorNickname;
    NSString *_eventName;
}

+ (void)initialize;
+ (void)PBArrayAdd_eventName;
+ (void)PBArrayAdd_creatorNickname;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(copy, nonatomic) NSString *creatorNickname; // @synthesize creatorNickname=_creatorNickname;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEventTopicInfo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

