//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray;

@interface BatchGetFavItemRequest : WXPBGeneratedMessage
{
    int favIdListMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int count; // @dynamic count;
@property(retain, nonatomic) NSMutableArray *favIdList; // @dynamic favIdList;

@end

