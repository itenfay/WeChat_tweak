//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSOrderedSet;

@interface MMFinderLiveFollowNotifyMsgInfo : NSObject
{
    NSOrderedSet *_followContactSet;
}

+ (id)createNotifyMsgInfoWithFollowContactOrderSet:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOrderedSet *followContactSet; // @synthesize followContactSet=_followContactSet;
- (id)description;

@end

