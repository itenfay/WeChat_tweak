//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol PhotoViewControllerDelegate <NSObject>
- (void)photoVCDidScrollToIndex:(unsigned int)arg1;
- (void)photoVCHideAnimationCompleted;
- (void)photoVCDidBePoped;
- (void)photoVCWillBePoped;
@end

