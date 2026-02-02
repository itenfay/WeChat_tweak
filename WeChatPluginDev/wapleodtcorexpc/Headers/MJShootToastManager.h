//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WeToast;

@interface MJShootToastManager : NSObject
{
    WeToast *_toastVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WeToast *toastVC; // @synthesize toastVC=_toastVC;
- (void)showToastWithText:(id)arg1;
- (void)hideToastIfNeeded;
- (void)showMusicCaptionSendRequestToast;
- (void)showMusicCaptionRequestFailedToast;
- (void)showMusicCaptionEmptyToast;

@end

