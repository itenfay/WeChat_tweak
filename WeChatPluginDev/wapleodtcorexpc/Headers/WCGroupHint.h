//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCGroupHint : NSObject
{
    unsigned int _groupId;
    NSString *_topFeedId;
    NSString *_bottomFeedId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bottomFeedId; // @synthesize bottomFeedId=_bottomFeedId;
@property(retain, nonatomic) NSString *topFeedId; // @synthesize topFeedId=_topFeedId;
@property(nonatomic) unsigned int groupId; // @synthesize groupId=_groupId;
- (id)description;
- (_Bool)isValid;

@end

