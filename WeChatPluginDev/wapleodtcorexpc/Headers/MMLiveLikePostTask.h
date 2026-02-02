//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId;

@interface MMLiveLikePostTask : NSObject
{
    _Bool _isClipMode;
    MMLiveTaskId *_liveTaskId;
    unsigned long long _likeCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isClipMode; // @synthesize isClipMode=_isClipMode;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;

@end

