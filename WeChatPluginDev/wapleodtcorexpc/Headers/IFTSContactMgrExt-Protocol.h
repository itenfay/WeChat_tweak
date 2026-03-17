//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IFTSContactMgrExt <NSObject>

@optional
- (void)onFTSTopHitFinishSearch:(NSString *)arg1;
- (void)onFTSTopHitBeginSearch:(NSString *)arg1;
- (void)onFTSContactSearchFinish:(NSString *)arg1;
@end

