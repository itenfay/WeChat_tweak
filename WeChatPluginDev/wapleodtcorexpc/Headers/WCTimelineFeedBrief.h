//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTimelineFeedBrief : NSObject
{
    _Bool _isWeishange;
    unsigned int _createTime;
    NSString *_feedId;
    NSString *_username;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isWeishange; // @synthesize isWeishange=_isWeishange;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (id)description;

@end

