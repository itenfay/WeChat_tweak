//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIColor;
@protocol MMLiveUniqueTaskId;

@protocol MMFinderLiveKTVUIExt <NSObject>

@optional
- (void)onLiveKTVMainWidgetColorUpdate:(UIColor *)arg1 taskId:(id <MMLiveUniqueTaskId>)arg2;
- (void)onLiveKTVUserHeatValueUpdate:(NSString *)arg1 taskId:(id <MMLiveUniqueTaskId>)arg2;
@end

