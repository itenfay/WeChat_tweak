//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol MMMsgSearchTabViewDelegate;

@protocol MMMsgSearchTabViewProtocol <NSObject>
@property(nonatomic) __weak id <MMMsgSearchTabViewDelegate> delegate;
- (double)getTabUnderLineWidth;
- (double)getMsgSearchType;
- (struct CGRect)getTitleLabelFrame;
- (void)updateForState:(unsigned long long)arg1;
- (void)setTitleText:(NSString *)arg1;
@end

