//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCMomentsForwardBaseOp;

@protocol WCMomentsForwardBaseOpDelegate <NSObject>
- (void)onMomentsForwardOpDidSend:(WCMomentsForwardBaseOp *)arg1;
- (void)onMomentsForwardOpDidCancel:(WCMomentsForwardBaseOp *)arg1;
@end

