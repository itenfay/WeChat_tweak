//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMWebFinderPlayArgs, MMWebPluginNativeVideoJSContext;

@interface MMWebPluginNativeVideoContext : NSObject
{
    _Bool _bShouldResumeWhenAppear;
    _Bool _needEvent;
    unsigned int _viewId;
    MMWebPluginNativeVideoJSContext *_jsContext;
    MMWebFinderPlayArgs *_finderPlayInfo;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMWebFinderPlayArgs *finderPlayInfo; // @synthesize finderPlayInfo=_finderPlayInfo;
@property(retain, nonatomic) MMWebPluginNativeVideoJSContext *jsContext; // @synthesize jsContext=_jsContext;
@property(nonatomic) _Bool needEvent; // @synthesize needEvent=_needEvent;
@property(nonatomic) _Bool bShouldResumeWhenAppear; // @synthesize bShouldResumeWhenAppear=_bShouldResumeWhenAppear;
@property(nonatomic) unsigned int viewId; // @synthesize viewId=_viewId;
- (_Bool)hasWebCompt;
- (id)initWithViewId:(unsigned int)arg1;

@end

