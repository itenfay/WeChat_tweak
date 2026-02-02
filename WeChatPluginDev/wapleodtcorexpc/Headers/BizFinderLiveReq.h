//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSMutableArray;

@interface BizFinderLiveReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *bizusername; // @dynamic bizusername;
@property(retain, nonatomic) NSMutableArray *finderusername; // @dynamic finderusername;
@property(nonatomic) unsigned int pageSize; // @dynamic pageSize;
@property(retain, nonatomic) NSData *pagingBuffer; // @dynamic pagingBuffer;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

