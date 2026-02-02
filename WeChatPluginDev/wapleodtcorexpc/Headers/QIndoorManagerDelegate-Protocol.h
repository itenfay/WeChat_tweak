//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class QIndoorBuilding, QIndoorLevel, QIndoorManager;

@protocol QIndoorManagerDelegate <NSObject>

@optional
- (void)indoorManager:(QIndoorManager *)arg1 didChangeActiveLevel:(QIndoorLevel *)arg2;
- (void)indoorManager:(QIndoorManager *)arg1 didChangeActiveBuilding:(QIndoorBuilding *)arg2;
@end

