//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface TingAudioRecorderResult : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int retCode; // @dynamic retCode;
@property(nonatomic) int voiceDuration; // @dynamic voiceDuration;
@property(retain, nonatomic) NSString *voiceFilePath; // @dynamic voiceFilePath;

@end

