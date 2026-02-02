//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveGift, NSData, NSString;

@interface FinderLiveSyncRecommendUserSendGiftInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *ctx; // @dynamic ctx;
@property(retain, nonatomic) FinderLiveGift *gift; // @dynamic gift;
@property(nonatomic) unsigned long long seq; // @dynamic seq;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

