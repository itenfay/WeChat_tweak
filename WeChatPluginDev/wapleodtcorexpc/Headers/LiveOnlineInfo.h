//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface LiveOnlineInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool enableFlag; // @dynamic enableFlag;
@property(retain, nonatomic) NSString *onlineCountStr; // @dynamic onlineCountStr;
@property(retain, nonatomic) NSMutableArray *onlineTopRewarderInfos; // @dynamic onlineTopRewarderInfos;
@property(nonatomic) _Bool replaceFlag; // @dynamic replaceFlag;

@end

