//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface WCMicroMerchantFeedsGroup : NSObject
{
    unsigned int _groupTime;
    int _topFeedType;
    NSString *_groupId;
    NSString *_userName;
    NSString *_summaryTitle;
    NSMutableSet *_feedIds;
}

+ (id)buildWsGroupDict:(id)arg1;
+ (id)fromDataList:(id)arg1 oldGroup:(id)arg2;
+ (id)fromServerObj:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int topFeedType; // @synthesize topFeedType=_topFeedType;
@property(retain, nonatomic) NSMutableSet *feedIds; // @synthesize feedIds=_feedIds;
@property(retain, nonatomic) NSString *summaryTitle; // @synthesize summaryTitle=_summaryTitle;
@property(nonatomic) unsigned int groupTime; // @synthesize groupTime=_groupTime;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (id)description;
- (id)filterFeedIdsWithoutGroupId;
- (id)sortedFeedIds;
- (id)init;

@end

