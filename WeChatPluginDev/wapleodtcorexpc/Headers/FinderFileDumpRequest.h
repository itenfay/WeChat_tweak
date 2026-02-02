//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface FinderFileDumpRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(retain, nonatomic) NSString *fromApp; // @dynamic fromApp;
@property(retain, nonatomic) NSString *paramJson; // @dynamic paramJson;
@property(retain, nonatomic) NSString *posterUsername; // @dynamic posterUsername;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

