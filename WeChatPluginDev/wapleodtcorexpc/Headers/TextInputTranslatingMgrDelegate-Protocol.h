//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TextInputTranslatingMgrDelegate <NSObject>
- (NSString *)getChatName;
- (void)onTranslateFinishWithText:(NSString *)arg1 translateText:(NSString *)arg2 inputID:(unsigned long long)arg3;
@end

