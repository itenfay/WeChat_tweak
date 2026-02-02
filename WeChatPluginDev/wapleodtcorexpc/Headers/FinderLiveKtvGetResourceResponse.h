//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveKtvResourceAtmosphereBg, FinderLiveKtvResourceReverb;

@interface FinderLiveKtvGetResourceResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderLiveKtvResourceAtmosphereBg *resourceAb; // @dynamic resourceAb;
@property(retain, nonatomic) FinderLiveKtvResourceReverb *resourceRb; // @dynamic resourceRb;

@end

