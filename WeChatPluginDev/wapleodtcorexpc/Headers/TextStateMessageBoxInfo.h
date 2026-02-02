//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TextStateMessageBoxInfo : NSObject
{
    unsigned int _unreadLikeCount;
    unsigned int _unreadCommentCount;
    unsigned int _totalUnreadCount;
    NSArray *_userNames;
    NSString *_tip;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int totalUnreadCount; // @synthesize totalUnreadCount=_totalUnreadCount;
@property(nonatomic) unsigned int unreadCommentCount; // @synthesize unreadCommentCount=_unreadCommentCount;
@property(nonatomic) unsigned int unreadLikeCount; // @synthesize unreadLikeCount=_unreadLikeCount;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(copy, nonatomic) NSArray *userNames; // @synthesize userNames=_userNames;

@end

