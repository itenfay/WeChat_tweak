//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLocation, FinderObjectEventDesc, NSMutableArray;

@interface NewLifePostGuideJumpInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int displayEndTime; // @dynamic displayEndTime;
@property(nonatomic) unsigned int displayStartTime; // @dynamic displayStartTime;
@property(retain, nonatomic) FinderObjectEventDesc *event; // @dynamic event;
@property(retain, nonatomic) NSMutableArray *hashTagList; // @dynamic hashTagList;
@property(nonatomic) unsigned int jumpType; // @dynamic jumpType;
@property(retain, nonatomic) FinderLocation *location; // @dynamic location;
@property(nonatomic) unsigned long long postGuideId; // @dynamic postGuideId;

@end

