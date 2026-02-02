//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface MMListenIdListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(nonatomic) unsigned long long expireTimeS; // @dynamic expireTimeS;
@property(nonatomic) int listOrder; // @dynamic listOrder;
@property(retain, nonatomic) NSMutableArray *results; // @dynamic results;
@property(retain, nonatomic) NSString *updateMd5; // @dynamic updateMd5;

@end

