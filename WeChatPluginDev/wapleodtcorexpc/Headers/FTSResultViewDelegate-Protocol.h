//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, UIGestureRecognizer, UIView;

@protocol FTSResultViewDelegate <NSObject>
- (UIView *)ftsResultGetWCSearchContainerView;

@optional
- (void)onSelectContact:(CContact *)arg1 atIndex:(unsigned long long)arg2;
- (UIGestureRecognizer *)ftsResultGetWCSearcherPangesture;
- (void)onRemoveAddedResultView;
- (void)onFTSDetailViewReturn:(_Bool)arg1;
@end

