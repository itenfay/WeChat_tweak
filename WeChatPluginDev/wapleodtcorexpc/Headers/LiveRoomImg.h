//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class LiveRoomImg_DynamicVoiceLiveImg, NSString;

@interface LiveRoomImg : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) LiveRoomImg_DynamicVoiceLiveImg *dynamicVoiceLiveImg; // @dynamic dynamicVoiceLiveImg;
@property(nonatomic) unsigned int imgType; // @dynamic imgType;
@property(retain, nonatomic) NSString *voiceLiveImg; // @dynamic voiceLiveImg;
@property(nonatomic) unsigned int voiceLiveImgTs; // @dynamic voiceLiveImgTs;

@end

