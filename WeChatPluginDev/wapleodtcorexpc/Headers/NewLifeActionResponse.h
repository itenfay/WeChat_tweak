//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSString, NewLifeActionPlatformProto;

@class WXPBGeneratedMessage;

@interface NewLifeActionResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *cmdId; // @dynamic cmdId;
@property(nonatomic) unsigned int errCode; // @dynamic errCode;
@property(retain, nonatomic) NSString *errMsg; // @dynamic errMsg;
@property(retain, nonatomic) NewLifeActionPlatformProto *proto; // @dynamic proto;

@end

