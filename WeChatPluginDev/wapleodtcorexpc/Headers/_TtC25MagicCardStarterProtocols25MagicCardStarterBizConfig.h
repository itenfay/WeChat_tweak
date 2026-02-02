//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, _TtC25MagicCardStarterProtocols26MagicCardStarterRootConfig;
@protocol IMagicCardStarterDelegate;

@interface _TtC25MagicCardStarterProtocols25MagicCardStarterBizConfig : NSObject
{
    MISSING_TYPE *bizName;
    MISSING_TYPE *delegate;
    MISSING_TYPE *singleRootConfig;
    MISSING_TYPE *autoDestroyTime;
}

- (void).cxx_destruct;
- (id)init;
- (void)toString;
- (id)initWithBizName:(id)arg1 singleRootConfig:(id)arg2 delegate:(id)arg3 autoDestroyTime:(double)arg4;
@property(nonatomic) double autoDestroyTime; // @synthesize autoDestroyTime;
@property(nonatomic, retain) _TtC25MagicCardStarterProtocols26MagicCardStarterRootConfig *singleRootConfig; // @synthesize singleRootConfig;
@property(nonatomic, retain) id <IMagicCardStarterDelegate> delegate; // @synthesize delegate;
@property(nonatomic, copy) NSString *bizName;

@end

