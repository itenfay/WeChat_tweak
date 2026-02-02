//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray, NSString, ResolutionInfo;

@interface FinderLiveGetAllReplayThumbResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) NSString *lowBitrateReplayUrl; // @dynamic lowBitrateReplayUrl;
@property(retain, nonatomic) ResolutionInfo *resolutionInfo; // @dynamic resolutionInfo;
@property(nonatomic) unsigned int resolutionOnceChanged; // @dynamic resolutionOnceChanged;
@property(retain, nonatomic) NSMutableArray *thumbList; // @dynamic thumbList;

@end

