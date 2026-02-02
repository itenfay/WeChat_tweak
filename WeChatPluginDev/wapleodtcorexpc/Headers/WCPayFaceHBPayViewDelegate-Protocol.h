//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCPayFaceHBPayViewDelegate <NSObject>
- (void)onUserEndScreenCapture;
- (void)onUserstartScreenCapture;
- (void)OnHBSlide:(unsigned int)arg1 select:(unsigned int)arg2 Type:(unsigned int)arg3;
- (void)OnCaptureScreen;
- (NSString *)loadActionSheetTip;
- (void)OnLoadMoreRedEnvelopesList;
- (void)OnFaceHBViewHistory;
- (void)OnFaceHBViewDetail;
- (void)OnFaceHBDeleteHB;
- (void)OnFaceHBMyRedEnvelopesList;
- (void)OnFaceHBPayManage;
- (void)OnFaceHBPayCancel;
@end

