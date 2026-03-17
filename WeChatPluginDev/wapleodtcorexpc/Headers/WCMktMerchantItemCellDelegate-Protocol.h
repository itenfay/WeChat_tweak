//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CardElementCouponLabel, CardElementMchLabel, NSString;

@protocol WCMktMerchantItemCellDelegate <NSObject>
- (void)onMktmerchantItemCellClickMerchantAreaWithMerchantID:(NSString *)arg1;
- (void)onMktmerchantItemCellClickCardItemViewToOpenCardDetail:(NSString *)arg1 mchID:(NSString *)arg2 cardIndex:(unsigned int)arg3;
- (void)onMktmerchantItemCellClickCardItemViewTagBtnToOpenTinyApp:(CardElementCouponLabel *)arg1 merchantID:(NSString *)arg2;
- (void)onMktmerchantItemCellClickMerchantTagBtnToOpenTinyApp:(CardElementMchLabel *)arg1 merchantID:(NSString *)arg2;
- (void)onMktmerchantItemCellClickExpandBtnWithMerchantID:(NSString *)arg1;
@end

