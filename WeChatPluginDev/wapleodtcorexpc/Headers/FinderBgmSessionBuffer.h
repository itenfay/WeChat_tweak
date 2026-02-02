//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface FinderBgmSessionBuffer : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *feedIdList; // @dynamic feedIdList;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(nonatomic) unsigned long long requestId; // @dynamic requestId;
@property(nonatomic) unsigned long long searchReqId; // @dynamic searchReqId;

@end

