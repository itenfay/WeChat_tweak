//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC6WeChat13DNDReportItem : NSObject
{
    MISSING_TYPE *scene;
    MISSING_TYPE *chatName;
    MISSING_TYPE *toUserName;
    MISSING_TYPE *toTextStateID;
    MISSING_TYPE *role;
    MISSING_TYPE *action;
    MISSING_TYPE *exposedSet;
}

- (void).cxx_destruct;
- (id)init;
- (void)reportExposed;
- (id)initWithScene:(long long)arg1;
@property(nonatomic, copy) NSString *toTextStateID;
@property(nonatomic, copy) NSString *toUserName;
@property(nonatomic, copy) NSString *chatName;

@end

