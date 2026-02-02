//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSString;

@protocol IAutoTranslateMsgExt <NSObject>
- (void)OnAutoTranslateMsgStop:(NSString *)arg1;
- (void)OnAutoTranslateMsgStart:(CMessageWrap *)arg1;

@optional
- (void)onBatchAutoTranslateMsgDidFinish;
- (void)onBatchAutoTranslateMsgWillFinish;
- (void)onBatchAutoTranslateMsgDidStart;
- (void)onBatchAutoTranslateMsgWillStart;
@end

