//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveBottomButtonBackgroundColorConfig, MMFinderLiveBottomButtonImageResource, NSString;

@protocol MMFinderLiveBottomButtonStyleManagerDelegate <NSObject>
- (void)bottomButtonShouldStartPlayAnimation:(unsigned int)arg1 animationType:(unsigned int)arg2 filePath:(NSString *)arg3 animationWebUrl:(NSString *)arg4 animationCompletion:(void (^)(void))arg5;
- (void)bottomButtonStyleDidChange:(unsigned int)arg1 iconResource:(MMFinderLiveBottomButtonImageResource *)arg2 bgResource:(MMFinderLiveBottomButtonImageResource *)arg3;
- (void)bottomButtonDefaultColorDidChange:(MMFinderLiveBottomButtonBackgroundColorConfig *)arg1;
@end

