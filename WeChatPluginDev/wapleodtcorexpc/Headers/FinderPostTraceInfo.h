//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderPostTraceInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int coverHeight; // @dynamic coverHeight;
@property(nonatomic) unsigned int coverWidth; // @dynamic coverWidth;
@property(nonatomic) unsigned int findpostTime; // @dynamic findpostTime;
@property(nonatomic) unsigned int thumbHeight; // @dynamic thumbHeight;
@property(nonatomic) unsigned int thumbWidth; // @dynamic thumbWidth;
@property(retain, nonatomic) NSString *traceKey; // @dynamic traceKey;
@property(nonatomic) unsigned int uploadCdnEnd; // @dynamic uploadCdnEnd;
@property(nonatomic) unsigned int uploadCdnStart; // @dynamic uploadCdnStart;

@end

