//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MultipleTextStateCardView, TextStateCompositeCardView;

@protocol MultipleTextStateCardViewDataSource <NSObject>
- (void)configureSingleCardView:(TextStateCompositeCardView *)arg1 forMultipleCardView:(MultipleTextStateCardView *)arg2;
@end

