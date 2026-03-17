//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UITraitCollection;

@protocol WCMainWindowExt <NSObject>

@optional
- (void)mm_onColorAppearanceDidChange;
- (void)mm_traitCollectionDidChange:(UITraitCollection *)arg1;
@end

