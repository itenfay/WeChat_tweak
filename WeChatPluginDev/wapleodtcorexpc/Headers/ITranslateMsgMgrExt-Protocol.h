//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSString;

@protocol ITranslateMsgMgrExt <NSObject>

@optional
- (void)onTranslateMessageWillHandleResponse;
- (void)onTranslateMessageChanged:(CMessageWrap *)arg1;
- (void)onTranslateMessageFailed:(CMessageWrap *)arg1 errTip:(NSString *)arg2;
@end

