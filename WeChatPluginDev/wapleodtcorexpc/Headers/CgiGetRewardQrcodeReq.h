//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface CgiGetRewardQrcodeReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) _Bool hasCache; // @dynamic hasCache;
@property(retain, nonatomic) NSString *photoAeskey; // @dynamic photoAeskey;
@property(retain, nonatomic) NSString *photoUrl; // @dynamic photoUrl;

@end

