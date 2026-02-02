//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GeneralFastLoadPageDataRequestUrlInfo : NSObject
{
    unsigned int _preloadType;
    unsigned int _openScene;
    unsigned int _itemShowType;
    NSString *_url;
}

+ (id)generateRequestUrlInfoIfSupport:(_Bool)arg1 itemShowType:(unsigned int)arg2 url:(id)arg3 openScene:(unsigned int)arg4 preloadType:(unsigned int)arg5;
- (void).cxx_destruct;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(nonatomic) unsigned int openScene; // @synthesize openScene=_openScene;
@property(nonatomic) unsigned int preloadType; // @synthesize preloadType=_preloadType;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;

@end

