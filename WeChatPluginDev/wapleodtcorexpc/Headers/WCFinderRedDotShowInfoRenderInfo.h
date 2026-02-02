//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderRedDotRenderResultModel;

@interface WCFinderRedDotShowInfoRenderInfo : NSObject
{
    double _availableWidth;
    WCFinderRedDotRenderResultModel *_renderModel;
    unsigned long long _entryScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long entryScene; // @synthesize entryScene=_entryScene;
@property(retain, nonatomic) WCFinderRedDotRenderResultModel *renderModel; // @synthesize renderModel=_renderModel;
@property(nonatomic) double availableWidth; // @synthesize availableWidth=_availableWidth;
- (_Bool)canReuseByAvailableWidth:(double)arg1 entryScene:(unsigned long long)arg2;

@end

