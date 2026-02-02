//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PAGView;

@interface WAWebViewPlugin_PagView_Data : NSObject
{
    _Bool _hide;
    PAGView *_pagView;
    NSMutableDictionary *_imageDic;
    CDUnknownBlockType _pagCompletion;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hide; // @synthesize hide=_hide;
@property(copy, nonatomic) CDUnknownBlockType pagCompletion; // @synthesize pagCompletion=_pagCompletion;
@property(retain, nonatomic) NSMutableDictionary *imageDic; // @synthesize imageDic=_imageDic;
@property(retain, nonatomic) PAGView *pagView; // @synthesize pagView=_pagView;

@end

