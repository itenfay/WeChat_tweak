//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveHotCommentAnimationInfo, NSString;

@interface MMLiveProcessedHotAnimationInfo : NSObject
{
    FinderLiveHotCommentAnimationInfo *_animationInfo;
    NSString *_path;
    NSString *_landscapePath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *landscapePath; // @synthesize landscapePath=_landscapePath;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) FinderLiveHotCommentAnimationInfo *animationInfo; // @synthesize animationInfo=_animationInfo;

@end

