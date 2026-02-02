//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OMJTemplateServiceProvider;

@interface OMJTemplateServiceParams : NSObject
{
    id <OMJTemplateServiceProvider> _instaMovieServiceProvider;
    id <OMJTemplateServiceProvider> _camFunServiceProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <OMJTemplateServiceProvider> camFunServiceProvider; // @synthesize camFunServiceProvider=_camFunServiceProvider;
@property(readonly, nonatomic) id <OMJTemplateServiceProvider> instaMovieServiceProvider; // @synthesize instaMovieServiceProvider=_instaMovieServiceProvider;
- (id)initWithInstaMovieTemplateServiceProvider:(id)arg1 camFunServiceProvider:(id)arg2;
- (id)initWithCamFunTemplateServiceProvider:(id)arg1;
- (id)initWithInstaMovieTemplateServiceProvider:(id)arg1;

@end

