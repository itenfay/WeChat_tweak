//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, TLProfileDragDownView;

@protocol TLProfileDragDownViewDelegate <NSObject>
- (void)onTapTLProfileLikeButton:(TLProfileDragDownView *)arg1 toLiked:(_Bool)arg2;
- (void)onTapTLProfileChangeCoverButton:(TLProfileDragDownView *)arg1;
- (void)onTapTLProfileHeadButton:(TLProfileDragDownView *)arg1;
- (void)onTapTLProfileHeaderDetailButton:(TLProfileDragDownView *)arg1;
- (MMUIViewController *)onGetViewControllerForDragDownView;
@end

