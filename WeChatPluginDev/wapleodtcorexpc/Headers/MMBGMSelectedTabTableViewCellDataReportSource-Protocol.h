//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMBGMSelectedConfig, MMBGMSelectedTabTableBaseCell, NSString;

@protocol MMBGMSelectedTabTableViewCellDataReportSource <NSObject>
- (MMBGMSelectedConfig *)bgmSelectedTabTableViewCellGetPanelConfig:(MMBGMSelectedTabTableBaseCell *)arg1;
- (NSString *)bgmSelectedTabTableViewCellGetSearchWord:(MMBGMSelectedTabTableBaseCell *)arg1;
- (unsigned long long)bgmSelectedTabTableViewCellGetTabType:(MMBGMSelectedTabTableBaseCell *)arg1;
@end

