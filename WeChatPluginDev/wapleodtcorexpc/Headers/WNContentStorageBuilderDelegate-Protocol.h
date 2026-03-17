//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, WNContentStorage;

@protocol WNContentStorageBuilderDelegate <NSObject>
- (void)onGenerationFinish;
- (void)onGenerateContentStorage:(WNContentStorage *)arg1;
- (void)onSetHeadAttribute:(NSDictionary *)arg1;
@end

