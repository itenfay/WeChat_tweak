//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface WXLocalNotificationInfo : NSObject
{
    _Bool _fromNotFriend;
    NSString *_category;
    NSString *_title;
    NSString *_body;
    NSString *_foot;
    NSString *_soundName;
    NSString *_threadIdentifier;
    NSNumber *_badge;
    NSDictionary *_userInfo;
    NSDate *_date;
    NSString *_fromUser;
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool fromNotFriend; // @synthesize fromNotFriend=_fromNotFriend;
@property(copy, nonatomic) NSString *fromUser; // @synthesize fromUser=_fromUser;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSNumber *badge; // @synthesize badge=_badge;
@property(copy, nonatomic) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(copy, nonatomic) NSString *soundName; // @synthesize soundName=_soundName;
@property(copy, nonatomic) NSString *foot; // @synthesize foot=_foot;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
- (id)initWithIdentifier:(id)arg1;

@end

