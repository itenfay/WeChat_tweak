//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSNotification, NSString;

@protocol WCPayEcardModelViewDelegate <NSObject>
- (void)onWCPayEcardModelViewHideKeyboard;
- (void)onWCPayEcardModelViewShowKeyboard:(NSNotification *)arg1;
- (void)onWCPayEcardModelViewTextChange:(NSString *)arg1;
- (void)onWCPayEcardModelViewClickNewCardLink;
@end

