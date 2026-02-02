//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAEJTexture;

@interface WAEJBindingExternalTexture
{
    int _viewId;
    NSString *_type;
    WAEJTexture *_texture;
}

@property(retain, nonatomic) WAEJTexture *texture; // @synthesize texture=_texture;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) int viewId; // @synthesize viewId=_viewId;
- (void)updateTextureIfNeeded;
- (void)dealloc;
- (id)initWithContext:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;

@end

