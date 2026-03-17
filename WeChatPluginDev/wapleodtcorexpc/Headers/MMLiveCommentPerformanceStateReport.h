//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveCommentPerformanceStateReport : NSObject
{
    long long _state;
    unsigned long long _normalModeAllKeepSeconds;
    unsigned long long _smoothModeAllKeepSeconds;
}

+ (id)createDefaultStateReport:(long long)arg1;
@property(nonatomic) unsigned long long smoothModeAllKeepSeconds; // @synthesize smoothModeAllKeepSeconds=_smoothModeAllKeepSeconds;
@property(nonatomic) unsigned long long normalModeAllKeepSeconds; // @synthesize normalModeAllKeepSeconds=_normalModeAllKeepSeconds;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)increaseSmoothModeAllKeepSeconds;
- (void)increaseNormalModeAllKeepSeconds;

@end

