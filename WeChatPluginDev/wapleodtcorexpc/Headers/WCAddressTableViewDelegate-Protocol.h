//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCAddressStageDataStruct;

@protocol WCAddressTableViewDelegate <NSObject>
- (void)moveTopBarWithContentOffset:(double)arg1;
- (void)moveToStage:(unsigned long long)arg1 withAnimated:(_Bool)arg2;
- (void)chooseAddressAtComponent:(unsigned long long)arg1 withStageData:(WCAddressStageDataStruct *)arg2;
- (void)chooseProvinceStageWithNonCity:(WCAddressStageDataStruct *)arg1;
@end

