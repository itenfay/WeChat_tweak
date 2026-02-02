//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, _TtC6WeChat16MagicSclFrameSet;

@interface _TtC6WeChat22MagicSclViewCoverLogic : NSObject
{
    MISSING_TYPE *startupCoverView;
    MISSING_TYPE *startupCoverDebug;
    MISSING_TYPE *hasRemoveCover;
    MISSING_TYPE *showCoverTimestampMs;
    MISSING_TYPE *hasReportClickCover;
    MISSING_TYPE *sclView;
    MISSING_TYPE *frameSet;
    MISSING_TYPE *bizName;
    MISSING_TYPE *imageCache;
}

- (void).cxx_destruct;
- (id)init;
- (void)onSclViewLayout;
- (void)onSclViewAddSubView;
- (void)removeStartupCoverViewFromScl;
- (void)showStartupCoverView;
- (id)initWithSclView:(id)arg1 bizName:(id)arg2;
@property(nonatomic) __weak _TtC6WeChat16MagicSclFrameSet *frameSet; // @synthesize frameSet;

@end

