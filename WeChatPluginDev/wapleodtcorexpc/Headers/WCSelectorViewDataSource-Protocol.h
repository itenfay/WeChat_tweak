//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol WCSelectorViewDataSource <NSObject>
- (_Bool)shouldShowDeleteView;
- (struct CGSize)sizeForViews;
- (UIView *)viewAtIndex:(unsigned long long)arg1;
- (unsigned long long)numbersOfViews;

@optional
- (void)moveItemAtIndexPath:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (void)didSelectViewAtIndex:(unsigned long long)arg1;
@end

