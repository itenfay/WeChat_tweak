//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMFinderLiveRealNameFriendLikeNotificationMsg : NSObject
{
    NSArray *_likeList;
    NSString *_content;
}

+ (id)notificationMsgWithSvrMsg:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSArray *likeList; // @synthesize likeList=_likeList;

@end

