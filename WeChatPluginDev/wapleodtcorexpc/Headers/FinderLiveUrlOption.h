//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderLiveUrlOption : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int endTime; // @dynamic endTime;
@property(nonatomic) unsigned int remainTime; // @dynamic remainTime;
@property(retain, nonatomic) NSString *streamUrl; // @dynamic streamUrl;
@property(nonatomic) unsigned int timeLimit; // @dynamic timeLimit;

@end

