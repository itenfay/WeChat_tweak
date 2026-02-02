//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIView;
@protocol WCFinderTabPageViewBasicViewDelegate, WCFinderTabViewProtocol;

@protocol WCFinderTabPageViewBasicProtocol <NSObject>
@property(nonatomic) __weak id <WCFinderTabPageViewBasicViewDelegate> delegate;
- (void)adjustTabViewFrame;
- (void)setTabName:(NSString *)arg1 atIndex:(unsigned long long)arg2;
- (void)setSelectIndex:(unsigned long long)arg1;
- (unsigned long long)currentSelectIndex;
- (_Bool)removeTabAtIndex:(unsigned long long)arg1;
- (void)addTabWithTabView:(UIView<WCFinderTabViewProtocol> *)arg1;
- (void)addTabWithName:(NSString *)arg1;
- (id)initWithTabViewArray:(NSArray *)arg1;
- (id)initWithTabNameArray:(NSArray *)arg1;

@optional
- (void)setSelectFilterIndex:(unsigned long long)arg1;
- (void)setFilterNameArray:(NSArray *)arg1;
@end

