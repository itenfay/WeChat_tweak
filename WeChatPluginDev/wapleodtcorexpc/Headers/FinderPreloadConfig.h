//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderProfilePreloadConfig, NSData;

@interface FinderPreloadConfig : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool commentIsPreload; // @dynamic commentIsPreload;
@property(retain, nonatomic) NSData *commentPreloadBuffer; // @dynamic commentPreloadBuffer;
@property(nonatomic) unsigned int commentWaitTime; // @dynamic commentWaitTime;
@property(retain, nonatomic) FinderProfilePreloadConfig *profileConfig; // @dynamic profileConfig;
@property(nonatomic) _Bool userpageIsPreload; // @dynamic userpageIsPreload;
@property(nonatomic) unsigned int userpageWaitTime; // @dynamic userpageWaitTime;

@end

