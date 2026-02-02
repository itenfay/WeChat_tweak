//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSMutableSet, NSString;

@protocol ISolitaireMgrExt <NSObject>
- (void)onSolitaireDeactiveWithChatName:(NSString *)arg1 LocalIds:(NSMutableSet *)arg2;
- (void)onSolitaireActiveWithChatName:(NSString *)arg1 LocalIds:(NSMutableSet *)arg2;
- (void)onSolitaireFoldInfoChange:(CMessageWrap *)arg1;
@end

