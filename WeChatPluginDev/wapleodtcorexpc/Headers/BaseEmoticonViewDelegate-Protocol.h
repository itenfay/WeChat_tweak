//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CEmoticonWrap, CMessageWrap, NSString;

@protocol BaseEmoticonViewDelegate <NSObject>

@optional
- (void)deleteEmoticon;
- (void)sendNotGameEmoticonMessage:(CMessageWrap *)arg1 errorMsg:(NSString *)arg2;
- (void)didSelectorSelfDefinedEmotcion:(CEmoticonWrap *)arg1;
- (void)didSelectorEmoticon:(NSString *)arg1;
@end

