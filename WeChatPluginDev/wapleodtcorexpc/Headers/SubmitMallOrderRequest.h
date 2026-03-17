//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSString, Snapshot;

@class WXPBGeneratedMessage;

@interface SubmitMallOrderRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int fromScene; // @dynamic fromScene;
@property(retain, nonatomic) NSString *payAppid; // @dynamic payAppid;
@property(retain, nonatomic) Snapshot *snapshot; // @dynamic snapshot;

@end

