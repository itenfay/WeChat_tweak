//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface SnsWwLikeCoverRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bgfileid; // @dynamic bgfileid;
@property(retain, nonatomic) NSString *bgmd5Sum; // @dynamic bgmd5Sum;
@property(retain, nonatomic) NSString *bgurl; // @dynamic bgurl;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

