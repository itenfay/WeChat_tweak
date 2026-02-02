//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderGetTopicInfoResponse_RedirectTopicInfo, FinderTopicInfo;

@interface FinderGetTopicInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderGetTopicInfoResponse_RedirectTopicInfo *redirectInfo; // @dynamic redirectInfo;
@property(retain, nonatomic) FinderTopicInfo *topic; // @dynamic topic;

@end

