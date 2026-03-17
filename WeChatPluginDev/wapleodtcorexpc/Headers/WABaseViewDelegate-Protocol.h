//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSSet, WABaseView;

@protocol WABaseViewDelegate <NSObject>
- (void)onButtonClick:(WABaseView *)arg1;

@optional
- (void)onDragCancel:(NSSet *)arg1 canvas:(WABaseView *)arg2;
- (void)onDragEnd:(NSSet *)arg1 canvas:(WABaseView *)arg2;
- (void)onDragMove:(NSSet *)arg1 canvas:(WABaseView *)arg2;
- (void)onDragBegin:(NSSet *)arg1 canvas:(WABaseView *)arg2;
@end

