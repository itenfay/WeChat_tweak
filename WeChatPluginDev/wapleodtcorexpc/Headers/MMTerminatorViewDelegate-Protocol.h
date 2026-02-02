//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMTerminatorView;

@protocol MMTerminatorViewDelegate <NSObject>

@optional
- (void)terminatorViewDidClickSubtitle:(MMTerminatorView *)arg1;
- (void)terminatorViewDidClickTitle:(MMTerminatorView *)arg1;
- (void)terminatorViewDidClickIconImage:(MMTerminatorView *)arg1;
@end

