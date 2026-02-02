//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FavPhotoInfo, NSMutableArray, NSString;

@interface FavSecurityRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FavPhotoInfo *bigPhotoMd5; // @dynamic bigPhotoMd5;
@property(nonatomic) int opType; // @dynamic opType;
@property(retain, nonatomic) NSMutableArray *photoMd5List; // @dynamic photoMd5List;
@property(retain, nonatomic) NSString *text; // @dynamic text;

@end

