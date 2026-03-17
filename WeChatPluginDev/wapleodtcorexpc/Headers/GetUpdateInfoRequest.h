//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest;

@class WXPBGeneratedMessage;

@interface GetUpdateInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int channel; // @dynamic channel;
@property(nonatomic) unsigned int updateType; // @dynamic updateType;

@end

