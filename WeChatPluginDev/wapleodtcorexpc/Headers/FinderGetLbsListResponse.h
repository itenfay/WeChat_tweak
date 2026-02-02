//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray, NSString;

@interface FinderGetLbsListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int autoQueryInterval; // @dynamic autoQueryInterval;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) NSMutableArray *lbsResponseList; // @dynamic lbsResponseList;
@property(retain, nonatomic) NSString *materialCity; // @dynamic materialCity;
@property(retain, nonatomic) NSString *searchId; // @dynamic searchId;

@end

