//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSString.h>

@interface NSString (MMUIKitBugFix)
+ (void)load;
- (struct CGRect)mm_boundingRectWithSize:(struct CGSize)arg1 options:(long long)arg2 attributes:(id)arg3 context:(id)arg4;
- (_Bool)mmShouldFixWithHeight:(double)arg1 context:(id)arg2;
@end

