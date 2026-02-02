//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmotionCDNUrl, NSArray, NSString;

@protocol StoreEmotionExchangeEmotionPackCgiDelegate <NSObject>

@optional
- (void)onExchangeEmotionPackCgiFailedWithPid:(NSString *)arg1 AndRet:(int)arg2 ErroMsg:(NSString *)arg3;
- (void)onExchangeEmotionPackCgiFailedForNoResponseWithPid:(NSString *)arg1;
- (void)onExchangeEmotionPackCgiOkWithDesignerSetKey:(NSString *)arg1 needUpdatePids:(NSArray *)arg2;
- (void)onExchangeEmotionPackCgiOkWithPid:(NSString *)arg1 DownloadInfo:(EmotionCDNUrl *)arg2;
@end

