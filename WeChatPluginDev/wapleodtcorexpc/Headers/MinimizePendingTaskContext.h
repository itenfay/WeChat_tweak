//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIViewController;
@protocol IMinimizeTaskDelegateInterface;

@interface MinimizePendingTaskContext : NSObject
{
    NSObject<IMinimizeTaskDelegateInterface> *_notifyDelegate;
    NSString *_taskBizName;
    NSString *_taskBizKey;
    unsigned long long _generateType;
    UIViewController *_weakVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *weakVC; // @synthesize weakVC=_weakVC;
@property(nonatomic) unsigned long long generateType; // @synthesize generateType=_generateType;
@property(copy, nonatomic) NSString *taskBizKey; // @synthesize taskBizKey=_taskBizKey;
@property(copy, nonatomic) NSString *taskBizName; // @synthesize taskBizName=_taskBizName;
@property(nonatomic) __weak NSObject<IMinimizeTaskDelegateInterface> *notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
- (id)description;
- (_Bool)checkData;
- (id)initWithTaskBizName:(id)arg1 taskBizKey:(id)arg2 notifyDelegate:(id)arg3 generateType:(unsigned long long)arg4 weakVC:(id)arg5;

@end

