//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface ModFavItemRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int favId; // @dynamic favId;
@property(nonatomic) unsigned int indexCount; // @dynamic indexCount;
@property(retain, nonatomic) NSMutableArray *indexList; // @dynamic indexList;
@property(nonatomic) unsigned int objectCount; // @dynamic objectCount;
@property(retain, nonatomic) NSMutableArray *objectList; // @dynamic objectList;
@property(retain, nonatomic) NSString *replaceObject; // @dynamic replaceObject;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

