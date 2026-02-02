//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCShareCardBaseCardHeaderDelegate <NSObject>

@optional
- (_Bool)isItemFromOutAppScene;
- (void)onNeedOpenUrlStr:(NSString *)arg1;
- (void)onClickShareCardBtn;
- (void)onClickAcceptCardBtn:(NSString *)arg1;
@end

