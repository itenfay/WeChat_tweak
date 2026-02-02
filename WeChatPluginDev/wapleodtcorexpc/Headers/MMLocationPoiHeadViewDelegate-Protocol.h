//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMLocationPoiHeadViewDelegate <NSObject>
- (_Bool)isCurrentPOIFavorite;
- (void)onTapForwardBtn:(id)arg1;
- (void)onUpdateFavSelected:(_Bool)arg1;
- (void)onTapPhoneNumberLink:(NSString *)arg1;
- (void)onTapSwitchBtn:(id)arg1;
- (void)onNavigateToPOI:(id)arg1;
@end

