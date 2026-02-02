//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderLivePhotoMediaInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long fileSize; // @dynamic fileSize;
@property(nonatomic) unsigned int fileType; // @dynamic fileType;
@property(nonatomic) float height; // @dynamic height;
@property(retain, nonatomic) NSString *md5Sum; // @dynamic md5Sum;
@property(nonatomic) unsigned int playLen; // @dynamic playLen;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(retain, nonatomic) NSString *urlToken; // @dynamic urlToken;
@property(nonatomic) float width; // @dynamic width;

@end

