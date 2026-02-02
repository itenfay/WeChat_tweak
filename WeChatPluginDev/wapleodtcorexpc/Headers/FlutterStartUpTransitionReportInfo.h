//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FlutterStartUpTransitionReportInfo : NSObject
{
    long long _transitionStartMills;
    long long _transitionEndMills;
    long long _transitionMode;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithTransitionStartMills:(long long)arg1 transitionEndMills:(long long)arg2 transitionMode:(long long)arg3;
@property(nonatomic) long long transitionMode; // @synthesize transitionMode=_transitionMode;
@property(nonatomic) long long transitionEndMills; // @synthesize transitionEndMills=_transitionEndMills;
@property(nonatomic) long long transitionStartMills; // @synthesize transitionStartMills=_transitionStartMills;
- (id)toList;

@end

