//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface MusicLiveGetBeatArrangementResp_Result : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *clientid; // @dynamic clientid;
@property(nonatomic) unsigned int timeLengthInClipMs; // @dynamic timeLengthInClipMs;
@property(nonatomic) unsigned int timeOffsetInClipMs; // @dynamic timeOffsetInClipMs;

@end

