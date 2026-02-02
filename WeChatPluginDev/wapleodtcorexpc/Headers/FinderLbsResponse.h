//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLbsDivider, NSMutableArray, NSString;

@interface FinderLbsResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *address; // @dynamic address;
@property(retain, nonatomic) NSString *buildingId; // @dynamic buildingId;
@property(retain, nonatomic) NSString *distance; // @dynamic distance;
@property(retain, nonatomic) FinderLbsDivider *divider; // @dynamic divider;
@property(retain, nonatomic) NSString *floorName; // @dynamic floorName;
@property(retain, nonatomic) NSMutableArray *lbsTag; // @dynamic lbsTag;
@property(nonatomic) unsigned int poiBusinuessType; // @dynamic poiBusinuessType;
@property(retain, nonatomic) NSString *poiId; // @dynamic poiId;
@property(retain, nonatomic) NSString *poiName; // @dynamic poiName;

@end

