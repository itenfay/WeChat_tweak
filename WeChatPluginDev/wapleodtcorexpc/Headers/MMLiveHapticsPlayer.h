//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveHapticsPlayer : NSObject
{
}

+ (_Bool)hapticsSupported;
- (void)playPatternInFile:(id)arg1;
- (void)playPattern:(id)arg1;
- (void)anticipatePlayingWithinTimeInterval:(double)arg1;
- (id)init;

@end

