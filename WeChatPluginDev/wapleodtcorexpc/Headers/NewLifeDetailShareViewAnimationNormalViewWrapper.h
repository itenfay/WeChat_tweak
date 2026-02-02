//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIView;
@protocol FlutterTextureRegistry;

@interface NewLifeDetailShareViewAnimationNormalViewWrapper : NSObject
{
    UIView *_hostView;
    id <FlutterTextureRegistry> _textureRegistry;
    long long _textureId;
    struct __CVBuffer *_cvPixelBufferRef;
}

- (void).cxx_destruct;
@property(nonatomic) struct __CVBuffer *cvPixelBufferRef; // @synthesize cvPixelBufferRef=_cvPixelBufferRef;
@property(nonatomic) long long textureId; // @synthesize textureId=_textureId;
@property(nonatomic) __weak id <FlutterTextureRegistry> textureRegistry; // @synthesize textureRegistry=_textureRegistry;
@property(nonatomic) __weak UIView *hostView; // @synthesize hostView=_hostView;
- (void)releaeRes;
- (struct __CVBuffer *)copyPixelBuffer;
- (id)getViewInfo;
- (void)hideView;
- (void)showView;
- (void)bindFlutterTextureRegistry:(id)arg1;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

