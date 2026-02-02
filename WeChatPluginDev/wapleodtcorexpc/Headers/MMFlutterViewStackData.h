//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFlutterViewStackData : NSObject
{
    NSString *_engineId;
    unsigned long long _viewState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) NSString *engineId; // @synthesize engineId=_engineId;
- (_Bool)isVisible;
- (id)initWithEngineId:(id)arg1 viewState:(unsigned long long)arg2;

@end

