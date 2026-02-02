//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol JSShareFBLogicHelperDelegate <NSObject>
- (void)onJSShareFBFailedWithError:(int)arg1 msg:(NSString *)arg2;
- (void)onJSShareFBFinished;
- (void)onJSShareFBSharing;
@end

