//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AddWxagVideoRequest_VideoInfo, BaseRequest, NSString;

@interface AddWxagVideoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *taskId; // @dynamic taskId;
@property(retain, nonatomic) AddWxagVideoRequest_VideoInfo *videoInfo; // @dynamic videoInfo;

@end

