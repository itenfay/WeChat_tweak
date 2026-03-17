//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CEmoticonWrap;

@protocol EmoticonSearchViewControllerDelegate <NSObject>

@optional
- (void)onSearchEmoticonViewControllerDidClose;
- (void)onSearchEmoticonViewControllerSendEmoticon:(CEmoticonWrap *)arg1;
@end

