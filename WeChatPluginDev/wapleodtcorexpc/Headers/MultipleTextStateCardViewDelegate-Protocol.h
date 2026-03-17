//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MultipleTextStateCardView, TextStateCompositeCardView;

@protocol MultipleTextStateCardViewDelegate <NSObject>

@optional
- (void)onMultipleTextStateCard:(MultipleTextStateCardView *)arg1 willDisplayCard:(TextStateCompositeCardView *)arg2 atIndex:(unsigned long long)arg3;
- (void)onMultipleTextStateCard:(MultipleTextStateCardView *)arg1 didMoveFromCard:(TextStateCompositeCardView *)arg2 toCard:(TextStateCompositeCardView *)arg3;
@end

