//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface GetHtmlTransTextRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *fromLang; // @dynamic fromLang;
@property(nonatomic) unsigned int msgCount; // @dynamic msgCount;
@property(retain, nonatomic) NSMutableArray *msgList; // @dynamic msgList;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *toLang; // @dynamic toLang;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

