//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderDataItem;

@interface WCFinderPersonalCenterParams : NSObject
{
    _Bool _hasRedDotAtEnter;
    _Bool _openPostActionDirectly;
    int _refCommentScene;
    unsigned long long _fromScene;
    WCFinderDataItem *_fromDataItem;
    NSString *_refObjectid;
}

- (void).cxx_destruct;
@property(nonatomic) int refCommentScene; // @synthesize refCommentScene=_refCommentScene;
@property(copy, nonatomic) NSString *refObjectid; // @synthesize refObjectid=_refObjectid;
@property(retain, nonatomic) WCFinderDataItem *fromDataItem; // @synthesize fromDataItem=_fromDataItem;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) _Bool openPostActionDirectly; // @synthesize openPostActionDirectly=_openPostActionDirectly;
@property(nonatomic) _Bool hasRedDotAtEnter; // @synthesize hasRedDotAtEnter=_hasRedDotAtEnter;
- (id)initWithHasRedDotAtEnter:(_Bool)arg1 openPostActionDirectly:(_Bool)arg2 fromScene:(unsigned long long)arg3 refObjectid:(id)arg4 refCommentScene:(int)arg5 fromDataItem:(id)arg6;
- (id)initWithOpenPostActionDirectly:(_Bool)arg1 fromScene:(unsigned long long)arg2;

@end

