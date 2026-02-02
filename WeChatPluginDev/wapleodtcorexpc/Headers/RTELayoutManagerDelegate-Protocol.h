//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSTextAttachment;

@protocol RTELayoutManagerDelegate <NSObject>

@optional
- (void)drawGlyphsForGlyphRect:(struct CGRect)arg1 atPoint:(struct CGPoint)arg2 attachment:(NSTextAttachment *)arg3;
@end

