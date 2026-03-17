//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmoticonPackageDesc, NSArray, NSString;

@protocol EmoticonDescRecommandLogicDelegate <NSObject>

@optional
- (void)onEmoticonDescRecommandLogicFinishSearchWithKeyword:(NSString *)arg1 result:(NSArray *)arg2;
- (EmoticonPackageDesc *)getEmoticonPackageDescForPid:(NSString *)arg1;
@end

