//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray, NSString;

@interface RecommendPanelEmojiResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *emoji; // @dynamic emoji;
@property(retain, nonatomic) NSData *pageBuff; // @dynamic pageBuff;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

