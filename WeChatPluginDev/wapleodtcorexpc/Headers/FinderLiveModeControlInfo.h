//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveTagInfo, NSMutableArray;

@interface FinderLiveModeControlInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *fullTagInfo; // @dynamic fullTagInfo;
@property(retain, nonatomic) FinderLiveTagInfo *lastTagInfo; // @dynamic lastTagInfo;
@property(nonatomic) unsigned int liveMode; // @dynamic liveMode;
@property(nonatomic) unsigned int liveSubModeSwitchFlag; // @dynamic liveSubModeSwitchFlag;

@end

