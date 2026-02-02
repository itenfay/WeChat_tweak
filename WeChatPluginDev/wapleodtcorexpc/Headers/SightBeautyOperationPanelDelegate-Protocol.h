//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol SightBeautyOperationPanelDelegate <NSObject>

@optional
- (void)onSightBeautyOperationPanelSetBeautyEffect:(unsigned long long)arg1 withValue:(float)arg2;
- (void)onSightBeautyOperationPanelClose:(_Bool)arg1;
- (void)onSightBeautyOperationPanelSelected:(_Bool)arg1;
@end

