//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, EnterpriseBrandSelectSheetView;

@protocol EnterpriseBrandSelectSheetViewDelegate <NSObject>

@optional
- (void)onEnterpriseSelectBrandContact:(CContact *)arg1 sheetView:(EnterpriseBrandSelectSheetView *)arg2;
@end

