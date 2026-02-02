//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMCanvas26632ReportItem : NSObject
{
    _Bool _hasHeight;
    _Bool _contextExist;
    _Bool _preload;
    unsigned int _height;
    NSString *_biz;
    NSString *_cardId;
    unsigned long long _contextLaunchTs;
    unsigned long long _preloadTs;
    unsigned long long _exposeTs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long exposeTs; // @synthesize exposeTs=_exposeTs;
@property(nonatomic) unsigned long long preloadTs; // @synthesize preloadTs=_preloadTs;
@property(nonatomic) unsigned long long contextLaunchTs; // @synthesize contextLaunchTs=_contextLaunchTs;
@property(nonatomic) _Bool preload; // @synthesize preload=_preload;
@property(nonatomic) _Bool contextExist; // @synthesize contextExist=_contextExist;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) _Bool hasHeight; // @synthesize hasHeight=_hasHeight;
@property(copy, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(copy, nonatomic) NSString *biz; // @synthesize biz=_biz;

@end

