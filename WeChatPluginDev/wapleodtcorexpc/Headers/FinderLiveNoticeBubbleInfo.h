//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveNoticeInfo;

@interface FinderLiveNoticeBubbleInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int disappearTimeMsAfterClick; // @dynamic disappearTimeMsAfterClick;
@property(nonatomic) unsigned int disappearTimeMsWithoutAction; // @dynamic disappearTimeMsWithoutAction;
@property(nonatomic) _Bool display; // @dynamic display;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @dynamic noticeInfo;

@end

