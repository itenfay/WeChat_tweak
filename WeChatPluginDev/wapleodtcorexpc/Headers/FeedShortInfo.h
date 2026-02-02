//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FeedShortInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int duration; // @dynamic duration;
@property(retain, nonatomic) NSString *feedDesc; // @dynamic feedDesc;
@property(retain, nonatomic) NSString *feedImage; // @dynamic feedImage;
@property(nonatomic) unsigned long long feedTime; // @dynamic feedTime;
@property(retain, nonatomic) NSString *feedUrl; // @dynamic feedUrl;
@property(retain, nonatomic) NSString *feedUrlToken; // @dynamic feedUrlToken;
@property(nonatomic) unsigned int likeCount; // @dynamic likeCount;
@property(nonatomic) float mediaHeight; // @dynamic mediaHeight;
@property(nonatomic) float mediaWidth; // @dynamic mediaWidth;

@end

