//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface GetAuthAppListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int appCount; // @dynamic appCount;
@property(retain, nonatomic) NSMutableArray *authAppList; // @dynamic authAppList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;

@end

