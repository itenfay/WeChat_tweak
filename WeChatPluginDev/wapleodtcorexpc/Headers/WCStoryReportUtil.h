//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCStoryReportUtil : NSObject
{
    unsigned long long _storyEntranceExposeTimeStamp;
}

@property(nonatomic) unsigned long long storyEntranceExposeTimeStamp; // @synthesize storyEntranceExposeTimeStamp=_storyEntranceExposeTimeStamp;
- (id)reportEntranceExposeWithHeadImageArray:(id)arg1 unreadCount:(unsigned long long)arg2 unreadRelatedCommentCount:(unsigned long long)arg3;
- (void)genStoryEntranceExposeTime;

@end

