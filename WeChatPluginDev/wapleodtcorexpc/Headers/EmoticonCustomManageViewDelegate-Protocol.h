//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmoticonCustomManageView, EmoticonCustomManageWrap;

@protocol EmoticonCustomManageViewDelegate <NSObject>

@optional
- (void)onEmoticonCustomManageViewTaped:(EmoticonCustomManageWrap *)arg1 andView:(EmoticonCustomManageView *)arg2;
@end

