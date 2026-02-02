//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderModTextSelectModel;

@protocol WCFinderModifyEditInputViewDelegate <NSObject>
- (void)onModifyEditInputChangeFrom:(WCFinderModTextSelectModel *)arg1 toContent:(NSString *)arg2;
- (void)onModifyEditInputResign;
@end

