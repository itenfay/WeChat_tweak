//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderCourseInfo, FinderDramaInfo;

@interface FinderPaidCollectionInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)paidCollectionWithDrama:(id)arg1;
+ (id)paidCollectionWithCourse:(id)arg1;
- (unsigned int)tryOutFlag;
- (_Bool)isInvalid;
- (id)contact;
- (unsigned int)feedSortID;
- (unsigned int)buyCount;
- (id)collectionDesc;
- (id)coverImgUrl;
- (_Bool)existProcessingOrder;
- (_Bool)purchaseState;
- (unsigned long long)collectionPrice;
- (unsigned long long)collectionTopicID;
- (id)collectionName;
- (int)collectionType;

// Remaining properties
@property(retain, nonatomic) FinderCourseInfo *courseInfo; // @dynamic courseInfo;
@property(retain, nonatomic) FinderDramaInfo *dramaInfo; // @dynamic dramaInfo;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

