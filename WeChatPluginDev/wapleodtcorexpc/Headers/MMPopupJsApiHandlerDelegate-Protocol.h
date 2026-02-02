//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMPopupJsApiHandlerDelegate <NSObject>
- (void)callbackPopupCanvasClose:(NSString *)arg1 callbackId:(NSString *)arg2;
- (void)closePopupCanvas:(NSString *)arg1;
- (void)popUpCanvas:(NSString *)arg1 rect:(struct CGRect)arg2 hexColor:(NSString *)arg3 mode:(unsigned int)arg4 closeBlock:(void (^)(void))arg5;
@end

