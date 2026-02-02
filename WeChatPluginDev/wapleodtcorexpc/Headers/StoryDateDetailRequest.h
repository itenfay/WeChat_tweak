//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface StoryDateDetailRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *date; // @dynamic date;
@property(nonatomic) unsigned long long maxId; // @dynamic maxId;
@property(nonatomic) int timeZone; // @dynamic timeZone;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

