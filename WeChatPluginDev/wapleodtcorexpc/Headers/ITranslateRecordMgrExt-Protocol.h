//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FavoritesRecordDataField, NSString;

@protocol ITranslateRecordMgrExt <NSObject>

@optional
- (void)onTranslateRecordItemMessageChanged:(FavoritesRecordDataField *)arg1;
- (void)onTranslateRecordItemMessageFailed:(FavoritesRecordDataField *)arg1 errTip:(NSString *)arg2;
@end

