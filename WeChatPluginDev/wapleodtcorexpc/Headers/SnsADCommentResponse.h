//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, SnsADObject, SnsRecommendObject;

@interface SnsADCommentResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SnsADObject *snsAdobject; // @dynamic snsAdobject;
@property(retain, nonatomic) SnsRecommendObject *snsRecommendObject; // @dynamic snsRecommendObject;

@end

