//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, RecentPlayInfo_LaunchPrivilege, RecentPlayInfo_RecentPlayMore;

@interface RecentPlayInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *infoList; // @dynamic infoList;
@property(retain, nonatomic) RecentPlayInfo_LaunchPrivilege *launch; // @dynamic launch;
@property(retain, nonatomic) NSString *moduleTitle; // @dynamic moduleTitle;
@property(retain, nonatomic) RecentPlayInfo_RecentPlayMore *more; // @dynamic more;

@end

