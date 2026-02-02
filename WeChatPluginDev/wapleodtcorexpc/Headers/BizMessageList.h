//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BizProfileV2PagingInfo, NSMutableArray;

@interface BizMessageList : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *featuredList; // @dynamic featuredList;
@property(nonatomic) unsigned int featuredUpdateTime; // @dynamic featuredUpdateTime;
@property(retain, nonatomic) NSMutableArray *msg; // @dynamic msg;
@property(retain, nonatomic) BizProfileV2PagingInfo *pagingInfo; // @dynamic pagingInfo;

@end

