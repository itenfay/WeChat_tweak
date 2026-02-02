//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface GetTransTextRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int msgCount; // @dynamic msgCount;
@property(retain, nonatomic) NSMutableArray *msgList; // @dynamic msgList;
@property(retain, nonatomic) NSString *targetLang; // @dynamic targetLang;

@end

