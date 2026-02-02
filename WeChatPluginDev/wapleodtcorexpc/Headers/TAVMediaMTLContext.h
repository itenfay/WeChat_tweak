//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;
@protocol MTLCommandQueue, MTLDevice;

@interface TAVMediaMTLContext : NSObject
{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    struct __CVMetalTextureCache *_textureCache;
    NSMutableDictionary *_libraryCache;
}

+ (id)sharedContext;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *libraryCache; // @synthesize libraryCache=_libraryCache;
@property(nonatomic) struct __CVMetalTextureCache *textureCache; // @synthesize textureCache=_textureCache;
@property(retain, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(retain, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly, nonatomic) NSArray *libraries;
- (_Bool)registerLibrary:(id)arg1;
- (void)registerDefaultLibrary;
- (id)initWithDevice:(id)arg1;

@end

