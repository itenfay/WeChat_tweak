//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderFittingWidthRichView;

@protocol WCFinderFittingWidthRichViewDelegate <NSObject>

@optional
- (void)onRichView:(WCFinderFittingWidthRichView *)arg1 clickURL:(NSString *)arg2;
- (void)onRichView:(WCFinderFittingWidthRichView *)arg1 expandChanged:(_Bool)arg2;
@end

