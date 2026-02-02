//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderContact, NSString;

@interface FinderCourseInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(nonatomic) unsigned int buyCount; // @dynamic buyCount;
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(retain, nonatomic) NSString *courseDesc; // @dynamic courseDesc;
@property(retain, nonatomic) NSString *courseName; // @dynamic courseName;
@property(nonatomic) unsigned long long courseTopicId; // @dynamic courseTopicId;
@property(retain, nonatomic) NSString *coverImgUrl; // @dynamic coverImgUrl;
@property(nonatomic) unsigned int feedCount; // @dynamic feedCount;
@property(nonatomic) unsigned int feedPosId; // @dynamic feedPosId;
@property(nonatomic) unsigned int feedSortId; // @dynamic feedSortId;
@property(nonatomic) unsigned int isInvalid; // @dynamic isInvalid;
@property(nonatomic) unsigned int lastUpdateTime; // @dynamic lastUpdateTime;
@property(nonatomic) unsigned int price; // @dynamic price;
@property(nonatomic) unsigned long long resumeObjectId; // @dynamic resumeObjectId;
@property(nonatomic) unsigned int tryOutFlag; // @dynamic tryOutFlag;

@end

