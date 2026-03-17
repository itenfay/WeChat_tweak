//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol VoicePrintCreateViewControllerDelegate <NSObject>
- (NSString *)digitTitle;
- (void)onRecordButtonLifted;
- (void)onRecordButtonPressed;
- (void)onVerifyAfterOK;
- (void)onCreateClose;
- (void)onCreateError;
- (void)prepare;
@end

