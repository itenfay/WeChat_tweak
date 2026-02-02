//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ContactProfileRecommendInputInfo : NSObject
{
    NSString *_from_user;
    NSString *_receive_user;
    NSArray *_verify_msgs;
    NSArray *_chat_msgs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *chat_msgs; // @synthesize chat_msgs=_chat_msgs;
@property(retain, nonatomic) NSArray *verify_msgs; // @synthesize verify_msgs=_verify_msgs;
@property(retain, nonatomic) NSString *receive_user; // @synthesize receive_user=_receive_user;
@property(retain, nonatomic) NSString *from_user; // @synthesize from_user=_from_user;

@end

