//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId;

@interface MMLiveLikeInfo : NSObject
{
    MMLiveTaskId *_liveTaskId;
    unsigned long long _likeCount;
    unsigned long long _displayLikeCount;
    unsigned long long _selfLikeCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long selfLikeCount; // @synthesize selfLikeCount=_selfLikeCount;
@property(nonatomic) unsigned long long displayLikeCount; // @synthesize displayLikeCount=_displayLikeCount;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (void)addDisplayLikeCount;

@end

