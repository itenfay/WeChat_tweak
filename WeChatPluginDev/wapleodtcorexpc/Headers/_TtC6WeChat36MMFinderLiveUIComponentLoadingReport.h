//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC6WeChat36MMFinderLiveUIComponentLoadingReport : NSObject
{
    MISSING_TYPE *taskId;
    MISSING_TYPE *commentScene;
    MISSING_TYPE *feedID;
    MISSING_TYPE *liveID;
}

+ (void)reportWithComponentType:(long long)arg1 commentScene:(int)arg2 feedID:(unsigned long long)arg3 liveID:(unsigned long long)arg4 duration:(unsigned int)arg5 componentExtra:(id)arg6;
- (void).cxx_destruct;
- (id)init;
- (void)reportWithComponentType:(long long)arg1 duration:(unsigned int)arg2 componentExtra:(id)arg3;
- (id)initWithTaskId:(id)arg1;
- (id)initWithCommentScene:(int)arg1 feedID:(unsigned long long)arg2 liveID:(unsigned long long)arg3;

@end

