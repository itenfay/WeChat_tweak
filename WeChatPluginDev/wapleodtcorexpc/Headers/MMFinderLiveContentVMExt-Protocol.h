//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveContentVM, NSMutableArray;

@protocol MMFinderLiveContentVMExt <NSObject>

@optional
- (void)onFinishPublishingTextState:(MMFinderLiveContentVM *)arg1;
- (void)onForwardMessageCancelWithContentVM:(MMFinderLiveContentVM *)arg1 andUserArray:(NSMutableArray *)arg2;
- (void)onCancelForwardForForwardViewWithContentVM:(MMFinderLiveContentVM *)arg1;
- (void)onForwardSharePreConfirmCancelled:(MMFinderLiveContentVM *)arg1;
- (void)onForwardSharePreConfirmSend:(MMFinderLiveContentVM *)arg1 wxUsernameArray:(NSMutableArray *)arg2;
- (void)onDoneForwardMessageWithContentVM:(MMFinderLiveContentVM *)arg1 andUserArray:(NSMutableArray *)arg2 isCertificateType:(_Bool)arg3;
- (void)onDoneForwardForForwardViewWithContentVM:(MMFinderLiveContentVM *)arg1 isCertificateType:(_Bool)arg2;
@end

