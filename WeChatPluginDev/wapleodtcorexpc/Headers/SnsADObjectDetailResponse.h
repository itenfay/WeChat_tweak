//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AdvertiseObject, BaseResponse, SKBuiltinBuffer_t, SnsADObject, SnsRecommendObject;

@interface SnsADObjectDetailResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *adDynamicInfoBuffer; // @dynamic adDynamicInfoBuffer;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SnsADObject *object; // @dynamic object;
@property(retain, nonatomic) AdvertiseObject *remindAdobject; // @dynamic remindAdobject;
@property(retain, nonatomic) SKBuiltinBuffer_t *session; // @dynamic session;
@property(retain, nonatomic) SnsRecommendObject *snsRecommendObject; // @dynamic snsRecommendObject;

@end

