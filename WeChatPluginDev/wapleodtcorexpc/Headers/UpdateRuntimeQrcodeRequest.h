//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSString;

@class WXPBGeneratedMessage;

@interface UpdateRuntimeQrcodeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *respData; // @dynamic respData;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

