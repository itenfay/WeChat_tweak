//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface SnsTopListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned long long continueId; // @dynamic continueId;
@property(nonatomic) unsigned long long nextPageMaxId; // @dynamic nextPageMaxId;
@property(retain, nonatomic) NSMutableArray *objectList; // @dynamic objectList;

@end

