//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ReaderMessageCellView;

@protocol ReaderMessageFolderCellViewDelegate <NSObject>
- (void)onFolderCellView:(ReaderMessageCellView *)arg1 actionType:(unsigned long long)arg2 jumpType:(unsigned long long)arg3;
@end

