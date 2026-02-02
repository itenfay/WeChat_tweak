//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderFeedFlowView;

@protocol WCFinderFeedFlowViewUIEvents <NSObject>
- (void)onFinderFeedFlowViewDidConsumePreAppendedData:(WCFinderFeedFlowView *)arg1;
- (void)onFinderFeedFlowView:(WCFinderFeedFlowView *)arg1 loadingStateDidChangeFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 loadingType:(unsigned long long)arg4;
@end

