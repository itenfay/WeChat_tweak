//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PAGView, WCAdPagInfo, WCAdPagViewConfig, WCAdURLImageView;

@interface WCAdPagView
{
    WCAdPagInfo *_pagInfo;
    WCAdPagViewConfig *_config;
    WCAdURLImageView *_thumbView;
    PAGView *_pagView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PAGView *pagView; // @synthesize pagView=_pagView;
@property(retain, nonatomic) WCAdURLImageView *thumbView; // @synthesize thumbView=_thumbView;
@property(retain, nonatomic) WCAdPagViewConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) WCAdPagInfo *pagInfo; // @synthesize pagInfo=_pagInfo;
- (void)onAnimationUpdate:(id)arg1;
- (long long)fetchContentModeFromScaleMode:(int)arg1;
- (void)stop;
- (void)pause;
- (void)play;
- (void)initPagView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 pagInfo:(id)arg2 config:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

