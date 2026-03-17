//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSString.h>

@interface NSString (MMUIKit)
- (struct CGRect)mm_fastBoundingRectWithSize:(struct CGSize)arg1 options:(long long)arg2 attributes:(id)arg3 context:(id)arg4;
- (_Bool)mm_checkBoundingSize:(struct CGSize)arg1 options:(long long)arg2 attributes:(id)arg3 context:(id)arg4;
- (_Bool)mm_fastIsValidAttrbutes:(id)arg1;
- (struct CGSize)mm_fastSizeWithAttributes:(id)arg1;
- (struct CGSize)mm_fastSizeWithFont:(id)arg1;
@end

