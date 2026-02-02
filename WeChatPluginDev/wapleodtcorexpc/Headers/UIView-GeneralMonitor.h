//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@protocol WCGeneralMonitorExposeDelegate;

@interface UIView (GeneralMonitor)
@property(nonatomic) __weak id <WCGeneralMonitorExposeDelegate> gm_exposeDelegate;
@end

