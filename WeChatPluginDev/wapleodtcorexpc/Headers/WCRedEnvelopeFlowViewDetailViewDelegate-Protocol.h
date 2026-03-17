//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class HbEnvelopSource;

@protocol WCRedEnvelopeFlowViewDetailViewDelegate <NSObject>
- (void)onWCRedEnvelopeFlowViewDetailViewGotoPreview:(HbEnvelopSource *)arg1;
- (void)onWCRedEnvelopeFlowViewDetailViewCancel;
- (void)onWCRedEnvelopeFlowViewDetailViewSelect:(HbEnvelopSource *)arg1;
@end

