//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol MMLiveMorphDismissTarget <NSObject>
- (struct CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(NSString *)arg1 videoSize:(struct CGSize)arg2;
- (_Bool)shouldLiveUseMorphDismissForCustomKey:(NSString *)arg1;

@optional
- (UIView *)liveMorphDismissTargetCustomTransitionSnapshotViewForCustomKey:(NSString *)arg1;
- (_Bool)shouldLiveKeepAudioEnabledAfterMorphDismissForCustomKey:(NSString *)arg1;
@end

