//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class KindaUIView;

@protocol KindaUIViewDelegate <NSObject>
- (void)sizeDidChange:(KindaUIView *)arg1;
- (void)didTap:(KindaUIView *)arg1;
@end

