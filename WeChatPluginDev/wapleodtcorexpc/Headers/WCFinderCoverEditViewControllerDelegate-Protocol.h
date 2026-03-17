//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSMutableDictionary;

@protocol WCFinderCoverEditViewControllerDelegate <NSObject>

@optional
- (NSMutableDictionary *)onCoverEditGenReportInfoDic;
- (void)onCoverEditRemoveCoverActionFromVC:(MMUIViewController *)arg1;
- (void)onCoverEditDidAppear:(MMUIViewController *)arg1;
@end

