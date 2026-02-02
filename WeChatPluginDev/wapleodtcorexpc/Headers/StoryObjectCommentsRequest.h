//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface StoryObjectCommentsRequest : WXPBGeneratedMessage
{
    int objIdListMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int objIdCount; // @dynamic objIdCount;
@property(retain, nonatomic) NSMutableArray *objIdList; // @dynamic objIdList;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

