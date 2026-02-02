//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderRedDotCountModel : NSObject
{
    _Bool _showPrivateEntryRedDot;
    long long _memberUnreadMsgCount;
    long long _finderUnreadMsgCount;
    long long _finderPrivateMsgCount;
}

@property(nonatomic) _Bool showPrivateEntryRedDot; // @synthesize showPrivateEntryRedDot=_showPrivateEntryRedDot;
@property(nonatomic) long long finderPrivateMsgCount; // @synthesize finderPrivateMsgCount=_finderPrivateMsgCount;
@property(nonatomic) long long finderUnreadMsgCount; // @synthesize finderUnreadMsgCount=_finderUnreadMsgCount;
@property(nonatomic) long long memberUnreadMsgCount; // @synthesize memberUnreadMsgCount=_memberUnreadMsgCount;
- (long long)getTotalMentionCount;

@end

