//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface StoryHistoryPageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *firstPageMd5; // @dynamic firstPageMd5;
@property(nonatomic) unsigned int historyItemCount; // @dynamic historyItemCount;
@property(retain, nonatomic) NSMutableArray *historyItemList; // @dynamic historyItemList;
@property(nonatomic) unsigned long long limitedId; // @dynamic limitedId;
@property(nonatomic) unsigned int newRequestTime; // @dynamic newRequestTime;

@end

