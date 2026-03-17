//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol WAMsgSelectViewControllerDelegate <NSObject>

@optional
- (void)onMsgSelectCancel;
- (void)onMsgSelectFinish:(NSArray *)arg1 hd:(_Bool)arg2;
@end

