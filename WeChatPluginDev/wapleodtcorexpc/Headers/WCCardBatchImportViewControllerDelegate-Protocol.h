//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCCardBatchImportViewControllerDelegate <NSObject>
- (void)onShareFail:(NSString *)arg1;
- (void)onShareSuccess:(NSString *)arg1;
- (void)onImportFail:(NSString *)arg1;
- (void)onImportSuccess:(NSString *)arg1;
- (void)onBatchDidBeCleared;
- (void)onCancel;
@end

