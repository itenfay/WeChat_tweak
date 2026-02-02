//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveKtvGetMusicBoardTypeListResponse, NSData, NSMutableArray, NSString;

@interface FinderLiveKtvGetMusicBoardResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) NSMutableArray *playBasicInfoList; // @dynamic playBasicInfoList;
@property(nonatomic) int realnameRet; // @dynamic realnameRet;
@property(retain, nonatomic) NSString *realnameUrl; // @dynamic realnameUrl;
@property(retain, nonatomic) FinderLiveKtvGetMusicBoardTypeListResponse *typeListResponse; // @dynamic typeListResponse;

@end

