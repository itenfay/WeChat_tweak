//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, SnsTranslateDataWrap;

@protocol ITranslateSnsMgrExt <NSObject>

@optional
- (void)onTranslateSnsChangedFromPhotoContent:(NSString *)arg1;
- (void)onTranslateSnsChanged:(SnsTranslateDataWrap *)arg1;
- (void)onTranslateSnsFailed:(SnsTranslateDataWrap *)arg1 errTip:(NSString *)arg2;
@end

