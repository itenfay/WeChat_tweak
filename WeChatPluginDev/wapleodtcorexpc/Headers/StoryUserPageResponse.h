//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface StoryUserPageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *firstPageMd5; // @dynamic firstPageMd5;
@property(nonatomic) unsigned long long limitedId; // @dynamic limitedId;
@property(nonatomic) unsigned int newRequestTime; // @dynamic newRequestTime;
@property(nonatomic) unsigned int objCount; // @dynamic objCount;
@property(nonatomic) unsigned int objLast24HoursCount; // @dynamic objLast24HoursCount;
@property(retain, nonatomic) NSMutableArray *objList; // @dynamic objList;
@property(nonatomic) unsigned int objTotalCount; // @dynamic objTotalCount;

@end

