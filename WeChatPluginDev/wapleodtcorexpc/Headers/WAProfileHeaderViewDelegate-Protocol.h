//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WAContact;

@protocol WAProfileHeaderViewDelegate <NSObject>
- (void)onTagViewClicked:(WAContact *)arg1 tagType:(long long)arg2;
- (void)onServiceButtonClicked:(WAContact *)arg1;
- (void)onEnterButtonClicked:(WAContact *)arg1;
@end

