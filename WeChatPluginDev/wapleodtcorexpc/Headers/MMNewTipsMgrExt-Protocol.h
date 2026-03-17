//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, NewTipsInfo;

@protocol MMNewTipsMgrExt <NSObject>
- (void)onTipsShowInfoChangeWithPathKey:(NSString *)arg1;

@optional
- (void)onRevokePreviousTipsWithTipsInfo:(NewTipsInfo *)arg1;
@end

