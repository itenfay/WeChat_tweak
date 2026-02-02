//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMMsgTipsExpandViewDelegate <NSObject>
- (void)onHideExpandView:(_Bool)arg1;
- (void)onExpandViewSizeChange:(struct CGSize)arg1 animateAction:(void (^)(void))arg2 complete:(void (^)(void))arg3;
@end

