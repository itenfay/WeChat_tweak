//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPostTemplateCommentParams : NSObject
{
    int _type;
    NSString *_username;
    NSString *_nickName;
    NSString *_feedId;
    NSString *_feedNonceId;
    NSString *_refFeedId;
}

- (void).cxx_destruct;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *refFeedId; // @synthesize refFeedId=_refFeedId;
@property(copy, nonatomic) NSString *feedNonceId; // @synthesize feedNonceId=_feedNonceId;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)init;

@end

