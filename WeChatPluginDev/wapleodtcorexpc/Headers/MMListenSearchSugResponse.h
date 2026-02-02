//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface MMListenSearchSugResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *listenInfo; // @dynamic listenInfo;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;
@property(retain, nonatomic) NSMutableArray *results; // @dynamic results;
@property(retain, nonatomic) NSString *searchId; // @dynamic searchId;
@property(retain, nonatomic) NSString *searchInfo; // @dynamic searchInfo;
@property(retain, nonatomic) NSString *sugId; // @dynamic sugId;
@property(retain, nonatomic) NSMutableArray *words; // @dynamic words;

@end

