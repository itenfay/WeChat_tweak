//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WAMapAnnotationView;

@protocol WAMapAnnotationViewDelegate <NSObject>
- (void)onMapLabelClick:(WAMapAnnotationView *)arg1;
- (void)onMapAnnotationViewTap:(WAMapAnnotationView *)arg1;

@optional
- (void)onAnnotationZIndexChangeTo:(int)arg1;
@end

