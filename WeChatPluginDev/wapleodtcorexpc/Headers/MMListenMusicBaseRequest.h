//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenMusicBaseOptions, NSData;

@interface MMListenMusicBaseRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *musicGlobalContextBuffer; // @dynamic musicGlobalContextBuffer;
@property(retain, nonatomic) MMListenMusicBaseOptions *options; // @dynamic options;
@property(nonatomic) int testNum; // @dynamic testNum;

@end

