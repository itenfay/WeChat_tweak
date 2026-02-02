//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveStickerEditingView, UIEvent, UIView;

@protocol MMFinderLiveStickerEditingViewDelegate <NSObject>

@optional
- (UIView *)stickerEditingView:(MMFinderLiveStickerEditingView *)arg1 hitTest:(struct CGPoint)arg2 withEvent:(UIEvent *)arg3;
@end

