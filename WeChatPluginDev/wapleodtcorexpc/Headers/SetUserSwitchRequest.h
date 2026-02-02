//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray;

@interface SetUserSwitchRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *appSwitchFlagList; // @dynamic appSwitchFlagList;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;

@end

