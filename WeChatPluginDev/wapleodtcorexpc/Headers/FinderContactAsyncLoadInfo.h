//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveInfo, FinderLiveNoticeInfo, FinderObject, NSString;

@interface FinderContactAsyncLoadInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) FinderObject *liveFinderObject; // @dynamic liveFinderObject;
@property(retain, nonatomic) FinderLiveInfo *liveInfo; // @dynamic liveInfo;
@property(nonatomic) unsigned int memberStatus; // @dynamic memberStatus;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @dynamic noticeInfo;

@end

