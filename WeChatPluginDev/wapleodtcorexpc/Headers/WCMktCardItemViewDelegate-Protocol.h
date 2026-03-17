//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CardElementCouponLabel, NSString;

@protocol WCMktCardItemViewDelegate <NSObject>
- (void)onCardItemViewClickCardWithCardID:(NSString *)arg1 cardIndex:(unsigned int)arg2;
- (void)onCardItemViewClickTagBtnToOpenTinyApp:(CardElementCouponLabel *)arg1;
@end

