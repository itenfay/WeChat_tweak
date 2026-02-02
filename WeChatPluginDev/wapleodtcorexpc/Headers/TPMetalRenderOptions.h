//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPMetalRenderOptions : NSObject
{
    _Bool _colorManagementFlag;
    _Bool _renderOptYuv420;
    _Bool _enableViewContentMode;
    _Bool _atBottom;
    int _rendererSharpenFlag;
    int _rendererLucidFlag;
    int _rendererClarityFlag;
}

@property(nonatomic) _Bool atBottom; // @synthesize atBottom=_atBottom;
@property(nonatomic) _Bool enableViewContentMode; // @synthesize enableViewContentMode=_enableViewContentMode;
@property(nonatomic) _Bool renderOptYuv420; // @synthesize renderOptYuv420=_renderOptYuv420;
@property(nonatomic) int rendererClarityFlag; // @synthesize rendererClarityFlag=_rendererClarityFlag;
@property(nonatomic) int rendererLucidFlag; // @synthesize rendererLucidFlag=_rendererLucidFlag;
@property(nonatomic) int rendererSharpenFlag; // @synthesize rendererSharpenFlag=_rendererSharpenFlag;
@property(nonatomic) _Bool colorManagementFlag; // @synthesize colorManagementFlag=_colorManagementFlag;
- (id)init;

@end

