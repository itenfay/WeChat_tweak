//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EnhanceTranslatingImageCdnObject;

@protocol EnhanceTranslatingViewDelegate <NSObject>
- (unsigned long long)currentSessionId;
- (void)onEnhanceTranslatingViewNavToResultVc:(EnhanceTranslatingImageCdnObject *)arg1;
- (void)onEnhanceTranslatingViewResultWillAppear;
- (void)onEnhanceTranslatingViewDiscard;
- (void)onEnhanceTranslatingViewCancel;
@end

