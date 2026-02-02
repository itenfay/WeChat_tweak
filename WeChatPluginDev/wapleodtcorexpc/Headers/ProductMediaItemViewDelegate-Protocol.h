//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ActionBase, NSString, ProductMediaItemView;

@protocol ProductMediaItemViewDelegate <NSObject>
- (void)mediaItemView:(ProductMediaItemView *)arg1 openMediaUrl:(NSString *)arg2 actionBase:(ActionBase *)arg3 actionListCount:(unsigned long long)arg4;
@end

