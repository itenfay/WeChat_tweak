//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveContact, FinderLiveInfo, NSString;

@interface FinderWatchLiveGetQRCodeStatusResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveContact *anchorLiveContact; // @dynamic anchorLiveContact;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderLiveInfo *liveInfo; // @dynamic liveInfo;
@property(nonatomic) unsigned int nextPollTs; // @dynamic nextPollTs;
@property(retain, nonatomic) NSString *token; // @dynamic token;

@end

