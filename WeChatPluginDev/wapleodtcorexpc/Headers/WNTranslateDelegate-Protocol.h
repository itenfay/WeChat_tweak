//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WNTranslateDelegate <NSObject>

@optional
- (void)onTranslateFinishWith:(_Bool)arg1 errMsg:(NSString *)arg2;
@end

