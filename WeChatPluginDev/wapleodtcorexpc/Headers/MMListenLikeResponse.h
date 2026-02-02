//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MMListenLikeResponse_ToastInfo, NSString;

@interface MMListenLikeResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bgmListenId; // @dynamic bgmListenId;
@property(nonatomic) _Bool isCommendLike; // @dynamic isCommendLike;
@property(retain, nonatomic) MMListenLikeResponse_ToastInfo *toast; // @dynamic toast;

@end

