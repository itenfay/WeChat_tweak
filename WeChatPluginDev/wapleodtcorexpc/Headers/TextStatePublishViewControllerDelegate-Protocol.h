//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString, TextStateModel;

@protocol TextStatePublishViewControllerDelegate <NSObject>

@optional
- (void)onTextStatePublishCancelled;
- (void)onTextStatePublishedWithTextState:(TextStateModel *)arg1 thumbImageData:(NSData *)arg2;
- (void)onTextStatePublishedWithIconId:(NSString *)arg1 iconDescription:(NSString *)arg2;
- (void)onTextStatePublished;
@end

