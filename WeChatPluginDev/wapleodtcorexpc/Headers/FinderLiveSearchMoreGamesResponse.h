//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface FinderLiveSearchMoreGamesResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *gameUserInfo; // @dynamic gameUserInfo;
@property(nonatomic) _Bool hasNext; // @dynamic hasNext;
@property(retain, nonatomic) NSString *nextOffset; // @dynamic nextOffset;

@end

