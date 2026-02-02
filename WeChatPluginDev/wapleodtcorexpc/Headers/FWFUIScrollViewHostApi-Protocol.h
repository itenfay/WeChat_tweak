//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSNumber;

@protocol FWFUIScrollViewHostApi
- (void)setContentOffsetForScrollViewWithIdentifier:(NSNumber *)arg1 toX:(NSNumber *)arg2 y:(NSNumber *)arg3 error:(id *)arg4;
- (void)scrollByForScrollViewWithIdentifier:(NSNumber *)arg1 x:(NSNumber *)arg2 y:(NSNumber *)arg3 error:(id *)arg4;
- (NSArray *)contentOffsetForScrollViewWithIdentifier:(NSNumber *)arg1 error:(id *)arg2;
- (void)createFromWebViewWithIdentifier:(NSNumber *)arg1 webViewIdentifier:(NSNumber *)arg2 error:(id *)arg3;
@end

