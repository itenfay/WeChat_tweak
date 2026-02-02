//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC6WeChat26FinderLiveStayTimeReporter : NSObject
{
    MISSING_TYPE *stayBusinessFlag;
    MISSING_TYPE *redDotTipsID;
    MISSING_TYPE *commentScene;
    MISSING_TYPE *enterTimeStampMs;
    MISSING_TYPE *exitTimeStampMs;
}

- (void).cxx_destruct;
- (void)OnLiveStayBusinessEnter:(unsigned long long)arg1 commentScene:(id)arg2 reddotTipsID:(id)arg3;
- (void)OnLiveStayBusinessExit:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

