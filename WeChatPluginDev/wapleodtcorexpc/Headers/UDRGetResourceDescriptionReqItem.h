//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface UDRGetResourceDescriptionReqItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *localResources; // @dynamic localResources;
@property(retain, nonatomic) NSString *projectId; // @dynamic projectId;
@property(retain, nonatomic) NSMutableArray *projectParameters; // @dynamic projectParameters;
@property(nonatomic) unsigned int qos; // @dynamic qos;
@property(retain, nonatomic) NSMutableArray *resourceName; // @dynamic resourceName;

@end

