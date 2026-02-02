//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface SubmitAsyncTTSReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int model; // @dynamic model;
@property(nonatomic) float speed; // @dynamic speed;
@property(retain, nonatomic) NSString *utf8Text; // @dynamic utf8Text;
@property(nonatomic) float volume; // @dynamic volume;

@end

