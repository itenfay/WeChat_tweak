//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface FinderLiveKtvGetMusicBoardTypeListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *boardTypeInfoList; // @dynamic boardTypeInfoList;
@property(nonatomic) unsigned int defaultBoardType; // @dynamic defaultBoardType;
@property(nonatomic) unsigned int defaultSubBoardType; // @dynamic defaultSubBoardType;
@property(nonatomic) _Bool hasKgAuthorized; // @dynamic hasKgAuthorized;

@end

