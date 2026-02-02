//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CEmoticonWrap;

@protocol MMQuickSendEmoticonViewDelegate <NSObject>

@optional
- (void)onMMQuickSendEmoticonViewClickSearchMoreWithWrap:(CEmoticonWrap *)arg1 index:(unsigned long long)arg2;
- (void)onMMQuickSendEmoticonViewClickEmoticonWrap:(CEmoticonWrap *)arg1 index:(unsigned long long)arg2;
@end

