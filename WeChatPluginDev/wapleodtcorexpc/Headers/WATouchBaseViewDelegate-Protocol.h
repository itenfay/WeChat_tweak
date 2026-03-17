//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, WATouchBaseView;

@protocol WATouchBaseViewDelegate <NSObject>

@optional
- (void)onTouchCancel:(NSArray *)arg1 canvas:(WATouchBaseView *)arg2;
- (void)onTouchEnd:(NSDictionary *)arg1 canvas:(WATouchBaseView *)arg2;
- (void)onTouchMove:(NSArray *)arg1 canvas:(WATouchBaseView *)arg2;
- (void)onTouchBegin:(NSDictionary *)arg1 canvas:(WATouchBaseView *)arg2;
@end

