//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderLiveSticker : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *pictureUrl; // @dynamic pictureUrl;
@property(retain, nonatomic) NSString *stickerId; // @dynamic stickerId;
@property(nonatomic) unsigned int stickerType; // @dynamic stickerType;
@property(retain, nonatomic) NSMutableArray *text; // @dynamic text;

@end

