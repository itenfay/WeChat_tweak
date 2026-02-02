//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol GCMessageViewModelProtocol;

@protocol GCMultiMessageViewModelDelegate <NSObject>
- (void)onChangeToMessageViewModel:(id <GCMessageViewModelProtocol>)arg1;
@end

