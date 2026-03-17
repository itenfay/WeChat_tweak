//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IFTSIntelligentMessageMgrExt <NSObject>

@optional
- (void)onFTSRestrictIntelligentSearchResultChanged:(NSString *)arg1;
- (void)onFTSDetailPageIntelligentMessageResultChanged:(_Bool)arg1;
- (void)onFTSHomePageIntelligentMessageResultChanged:(_Bool)arg1;
@end

