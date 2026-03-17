//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmoticonTextAntiSpamCgi;

@protocol EmoticonTextAntiSpamCgiDelegate <NSObject>

@optional
- (void)onEmoticonTextAntiSpamCgiFailed:(EmoticonTextAntiSpamCgi *)arg1;
- (void)onEmoticonTextAntiSpamCgiFinished:(EmoticonTextAntiSpamCgi *)arg1;
@end

