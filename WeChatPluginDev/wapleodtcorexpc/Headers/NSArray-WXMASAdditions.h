//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSArray.h>

@interface NSArray (WXMASAdditions)
- (id)mas_commonSuperviewOfViews;
- (void)mas_distributeViewsAlongAxis:(unsigned long long)arg1 withFixedItemLength:(double)arg2 leadSpacing:(double)arg3 tailSpacing:(double)arg4;
- (void)mas_distributeViewsAlongAxis:(unsigned long long)arg1 withFixedSpacing:(double)arg2 leadSpacing:(double)arg3 tailSpacing:(double)arg4;
- (id)mas_remakeConstraints:(CDUnknownBlockType)arg1;
- (id)mas_updateConstraints:(CDUnknownBlockType)arg1;
- (id)mas_makeConstraints:(CDUnknownBlockType)arg1;
@end

