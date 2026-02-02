//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray;

@interface TextStatusGetIconConfigReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long coverConfigKey; // @dynamic coverConfigKey;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(retain, nonatomic) NSMutableArray *iconConfigIdKeys; // @dynamic iconConfigIdKeys;
@property(nonatomic) unsigned long long iconConfigKey; // @dynamic iconConfigKey;
@property(nonatomic) unsigned long long keyValueConfigKey; // @dynamic keyValueConfigKey;

@end

