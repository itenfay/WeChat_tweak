//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmotionActivity, EmotionLink, StoreEmotionGetEmotionActivityCgi;

@protocol StoreEmotionGetEmotionActivityCgiDelegate <NSObject>
- (void)onGetEmotionActivityCgiFinished:(StoreEmotionGetEmotionActivityCgi *)arg1 activity:(EmotionActivity *)arg2 link:(EmotionLink *)arg3;
@end

