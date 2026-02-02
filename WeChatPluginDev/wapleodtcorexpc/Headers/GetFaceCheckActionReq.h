//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface GetFaceCheckActionReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int liveType; // @dynamic liveType;
@property(retain, nonatomic) NSString *package; // @dynamic package;
@property(retain, nonatomic) NSString *packageSign; // @dynamic packageSign;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSData *selectData; // @dynamic selectData;

@end

