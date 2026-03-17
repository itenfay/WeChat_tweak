//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TPMTKView, TPMetalColorHelper;

@protocol TPMetalRender <NSObject>
- (void)setColorHelper:(TPMetalColorHelper *)arg1;
- (void)setClarityFlag:(int)arg1;
- (void)setLucidFlag:(int)arg1;
- (void)setSharpenFlag:(int)arg1;
- (_Bool)prepareRender;
- (_Bool)drawFrame:(struct TPFrame *)arg1 withDestination:(TPMTKView *)arg2;
@end

