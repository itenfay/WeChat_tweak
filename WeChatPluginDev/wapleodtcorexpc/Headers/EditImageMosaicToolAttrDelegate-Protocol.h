//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditImageMosaicToolAttrView;

@protocol EditImageMosaicToolAttrDelegate <NSObject>
- (void)editImageMosaicToolAttrView:(EditImageMosaicToolAttrView *)arg1 didClickEraserBtn:(_Bool)arg2;
- (void)undoMosaicEditImage;
- (void)setSelectedMosaicStyleFromToolAttrView:(unsigned long long)arg1;
@end

