//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface WCFinderMentionMgr : NSObject
{
    NSMutableSet *_followingContactSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *followingContactSet; // @synthesize followingContactSet=_followingContactSet;
- (void)endMentionContactFollow:(id)arg1;
- (void)startToFollowMentionContact:(id)arg1;
- (_Bool)contactFollowingWithMention:(id)arg1;

@end

