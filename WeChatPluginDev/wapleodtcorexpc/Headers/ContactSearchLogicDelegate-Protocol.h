//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class BaseResponse, CContact, NSObject, NSString;

@protocol ContactSearchLogicDelegate <MMUIViewControllerDelegate>

@optional
- (void)onContactSearchLogicFailForThird:(BaseResponse *)arg1 extInfo:(NSObject *)arg2;
- (void)onContactSearchLogicDoneForThird:(CContact *)arg1 thirdFromScene:(unsigned int)arg2 spamWording:(NSString *)arg3 extInfo:(NSObject *)arg4;
- (void)onContactSearchLogicResearch:(NSString *)arg1;
- (void)onContactSearchLogicFail:(BaseResponse *)arg1;
- (void)onContactSearchLogicDone:(CContact *)arg1 FromScene:(unsigned int)arg2;
- (void)onContactSearchCGIEnd;
@end

