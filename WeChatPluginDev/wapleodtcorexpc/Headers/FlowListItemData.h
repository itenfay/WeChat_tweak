//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlowListArticleItemData, FlowListFinderItemData, NSNumber;

@interface FlowListItemData : NSObject
{
    NSNumber *_type;
    NSNumber *_hasLocalMsg;
    FlowListArticleItemData *_articleData;
    FlowListFinderItemData *_finderData;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithType:(id)arg1 hasLocalMsg:(id)arg2 articleData:(id)arg3 finderData:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) FlowListFinderItemData *finderData; // @synthesize finderData=_finderData;
@property(retain, nonatomic) FlowListArticleItemData *articleData; // @synthesize articleData=_articleData;
@property(retain, nonatomic) NSNumber *hasLocalMsg; // @synthesize hasLocalMsg=_hasLocalMsg;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
- (id)toList;

@end

