//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WATextView;

@protocol WATextViewDelegate <NSObject>
- (void)onWATextView:(WATextView *)arg1 frameDidChange:(struct CGRect)arg2;
@end

