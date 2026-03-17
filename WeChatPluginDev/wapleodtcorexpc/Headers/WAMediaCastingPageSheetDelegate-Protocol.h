//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WAMediaCastingPageSheet;

@protocol WAMediaCastingPageSheetDelegate <NSObject>

@optional
- (_Bool)isVideoPlayerInFullScreenModeWithPageSheet:(WAMediaCastingPageSheet *)arg1;
- (void)onMediaCastingPageSheetDidDismiss:(WAMediaCastingPageSheet *)arg1;
- (void)onMediaCastingPageSheetWillDismiss:(WAMediaCastingPageSheet *)arg1;
@end

