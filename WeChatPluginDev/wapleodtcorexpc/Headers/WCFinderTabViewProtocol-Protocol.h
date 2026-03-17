//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol WCFinderTabViewDelegate;

@protocol WCFinderTabViewProtocol <NSObject>
@property(nonatomic) __weak id <WCFinderTabViewDelegate> delegate;
- (void)setBindRedDotPath:(NSString *)arg1;
- (void)updateForState:(unsigned long long)arg1;
- (void)setTitleText:(NSString *)arg1;

@optional
- (void)clearRedDotView;
- (void)setCustomAccessibilityLabel:(NSString *)arg1;
- (void)setRedDotString:(NSString *)arg1;
@end

