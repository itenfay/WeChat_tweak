//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLocation, NSData, NSMutableArray, NSString;

@interface FinderGetPostRecommendTitleContext : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *currentWording; // @dynamic currentWording;
@property(retain, nonatomic) NSData *feedEmbedding; // @dynamic feedEmbedding;
@property(retain, nonatomic) NSMutableArray *feedLocation; // @dynamic feedLocation;
@property(retain, nonatomic) NSString *musicId; // @dynamic musicId;
@property(retain, nonatomic) NSString *session; // @dynamic session;
@property(retain, nonatomic) NSString *snapshotCdnUrl; // @dynamic snapshotCdnUrl;
@property(retain, nonatomic) NSData *snapshotImageData; // @dynamic snapshotImageData;
@property(retain, nonatomic) NSData *snapshotOcrData; // @dynamic snapshotOcrData;
@property(retain, nonatomic) NSString *templateId; // @dynamic templateId;
@property(retain, nonatomic) FinderLocation *userLocation; // @dynamic userLocation;

@end

