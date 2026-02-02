//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface FinderClickFeedBackResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned long long feedId; // @dynamic feedId;
@property(retain, nonatomic) NSMutableArray *notInterestedWordingList; // @dynamic notInterestedWordingList;
@property(retain, nonatomic) NSMutableArray *satisfactionQuestWordingList; // @dynamic satisfactionQuestWordingList;

@end

