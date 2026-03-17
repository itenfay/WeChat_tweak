//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIColor;

@protocol MosaicToolDelegate <NSObject>
@property(retain, nonatomic) id _mosaicImage;
@property(nonatomic) _Bool _isNeedRedrawMosaicImage;
- (UIColor *)colorOfPoint:(struct CGPoint)arg1;
@end

