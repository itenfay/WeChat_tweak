//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CEmoticonWrap;

@protocol WSSimilarEmoticonListViewControllerDelegate <NSObject>

@optional
- (void)onSelectEmoticon:(CEmoticonWrap *)arg1;
- (void)onSendEmoticonSucceeded;
@end

