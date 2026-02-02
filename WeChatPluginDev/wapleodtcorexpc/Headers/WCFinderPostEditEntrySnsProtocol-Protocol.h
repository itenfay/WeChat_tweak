//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIViewController, WCFinderPostSessionModel;

@protocol WCFinderPostEditEntrySnsProtocol <NSObject>

@optional
- (void)postEditMgrSaveDraftByPostSession:(WCFinderPostSessionModel *)arg1;
- (void)postEditMgrFailByPostSession:(WCFinderPostSessionModel *)arg1;
- (void)postEditMgrSucFromVC:(UIViewController *)arg1 postSession:(WCFinderPostSessionModel *)arg2;
@end

