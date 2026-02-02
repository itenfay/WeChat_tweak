//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenJumpInfo, NSString;

@interface MMListenDiscoverResponse_JumpableTopToastV2 : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *activityId; // @dynamic activityId;
@property(nonatomic) int exposeLimit; // @dynamic exposeLimit;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(retain, nonatomic) MMListenJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSString *subWording; // @dynamic subWording;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

