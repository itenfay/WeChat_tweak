//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, FinderLiveContact, FinderLiveKtvSongPlayInfo, NSString;

@class WXPBGeneratedMessage;

@interface FinderLiveKtvGetSongPlayInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderLiveContact *liveContact; // @dynamic liveContact;
@property(retain, nonatomic) NSString *micSdkUserId; // @dynamic micSdkUserId;
@property(retain, nonatomic) FinderLiveKtvSongPlayInfo *playInfo; // @dynamic playInfo;

@end

