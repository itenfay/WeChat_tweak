//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AppPatMessageRefreshContext : NSObject
{
    _Bool _useLightStyle;
    _Bool _useLink;
    _Bool _needCleanRefresh;
    double _width;
    NSMutableDictionary *_contentIdToTimeOffset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *contentIdToTimeOffset; // @synthesize contentIdToTimeOffset=_contentIdToTimeOffset;
@property(nonatomic) _Bool needCleanRefresh; // @synthesize needCleanRefresh=_needCleanRefresh;
@property(nonatomic) _Bool useLink; // @synthesize useLink=_useLink;
@property(nonatomic) _Bool useLightStyle; // @synthesize useLightStyle=_useLightStyle;
@property(nonatomic) double width; // @synthesize width=_width;
- (void)updateNeedCleanRefreshWithContext:(id)arg1;
- (id)init;

@end

