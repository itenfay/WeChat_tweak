//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCAdSnsCommentExtInfo : NSObject
{
    NSDictionary *_adTopicList;
}

+ (void)initialize;
+ (void)PBArrayAdd_adTopicList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *adTopicList; // @synthesize adTopicList=_adTopicList;
- (void)parseTopicListWithTopicList:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAdExtInfo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

