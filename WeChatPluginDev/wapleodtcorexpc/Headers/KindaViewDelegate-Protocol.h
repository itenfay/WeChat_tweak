//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class KindaView;

@protocol KindaViewDelegate <NSObject>

@optional
- (void)kindaViewSizeDidChange:(KindaView *)arg1;
@end

