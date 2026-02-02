//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMStarRatingView;

@protocol MMStarRatingViewDelegate <NSObject>
- (void)starRatingView:(MMStarRatingView *)arg1 scorePercentDidChange:(double)arg2;
@end

