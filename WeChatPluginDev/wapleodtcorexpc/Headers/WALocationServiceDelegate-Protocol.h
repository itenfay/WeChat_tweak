//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WAPOIInfo, WARegionPoiInfo;

@protocol WALocationServiceDelegate <NSObject>

@optional
- (void)onGetRegionData:(NSString *)arg1;
- (void)onChoosePoiCancel;
- (void)onChoosePoiFinished:(WARegionPoiInfo *)arg1;
- (void)onCancelOpenLocation;
- (void)onChooseLocation:(WAPOIInfo *)arg1;
- (void)onCancelChooseLocation;
@end

