//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface MMListenCommentRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *commentContent; // @dynamic commentContent;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(nonatomic) int time; // @dynamic time;
@property(nonatomic) int type; // @dynamic type;

@end

