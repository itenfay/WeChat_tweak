//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray;

@interface BatchModContactTypeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int modTypeInfoCount; // @dynamic modTypeInfoCount;
@property(retain, nonatomic) NSMutableArray *modTypeInfoList; // @dynamic modTypeInfoList;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

