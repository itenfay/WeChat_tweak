//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCStoryMessageUnit : NSObject
{
    unsigned int _lastCommentTime;
    NSString *_username;
    NSMutableArray *_dataItems;
    NSString *_lastCommentTid;
    NSString *_lastCommentId;
    long long _unreadCommentCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long unreadCommentCount; // @synthesize unreadCommentCount=_unreadCommentCount;
@property(retain, nonatomic) NSString *lastCommentId; // @synthesize lastCommentId=_lastCommentId;
@property(retain, nonatomic) NSString *lastCommentTid; // @synthesize lastCommentTid=_lastCommentTid;
@property(nonatomic) unsigned int lastCommentTime; // @synthesize lastCommentTime=_lastCommentTime;
@property(retain, nonatomic) NSMutableArray *dataItems; // @synthesize dataItems=_dataItems;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;

@end

