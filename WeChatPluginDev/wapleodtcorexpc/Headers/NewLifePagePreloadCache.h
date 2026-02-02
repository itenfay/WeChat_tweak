//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class MMFlutterInstance, MMFlutterPageStyle;

@interface NewLifePagePreloadCache : NSObject
{
    MMFlutterInstance *_instance;
    MMFlutterPageStyle *_style;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) MMFlutterPageStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) MMFlutterInstance *instance; // @synthesize instance=_instance;
- (_Bool)showFromViewController:(id)arg1;

@end
