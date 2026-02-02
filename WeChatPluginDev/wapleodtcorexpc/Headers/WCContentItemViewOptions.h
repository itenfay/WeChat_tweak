//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCMomentsPageContext;

@interface WCContentItemViewOptions : NSObject
{
    _Bool _showsDetail;
    unsigned long long _scene;
    WCMomentsPageContext *_pageContext;
    struct CGSize _adjustedMediaSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMomentsPageContext *pageContext; // @synthesize pageContext=_pageContext;
@property(nonatomic) struct CGSize adjustedMediaSize; // @synthesize adjustedMediaSize=_adjustedMediaSize;
@property(nonatomic) _Bool showsDetail; // @synthesize showsDetail=_showsDetail;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;

@end

