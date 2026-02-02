//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSMutableArray;

@class WXPBGeneratedMessage;

@interface StoryOpResponse : WXPBGeneratedMessage
{
    int opRetListMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int opRespCount; // @dynamic opRespCount;
@property(retain, nonatomic) NSMutableArray *opRetList; // @dynamic opRetList;

@end

