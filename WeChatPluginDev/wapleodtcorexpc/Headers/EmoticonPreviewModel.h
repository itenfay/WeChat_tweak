//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CEmoticonWrap, NSString;

@interface EmoticonPreviewModel : NSObject
{
    _Bool _showDesc;
    _Bool _enableOperation;
    int _scene;
    CEmoticonWrap *_emoticonWrap;
    NSString *_emoticonDescription;
    NSString *_pageWrapPid;
    NSString *_prevPageWrapPid;
    unsigned long long _index;
    struct CGRect _originFrame;
}

- (void).cxx_destruct;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) _Bool enableOperation; // @synthesize enableOperation=_enableOperation;
@property(nonatomic) _Bool showDesc; // @synthesize showDesc=_showDesc;
@property(retain, nonatomic) NSString *prevPageWrapPid; // @synthesize prevPageWrapPid=_prevPageWrapPid;
@property(retain, nonatomic) NSString *pageWrapPid; // @synthesize pageWrapPid=_pageWrapPid;
@property(retain, nonatomic) NSString *emoticonDescription; // @synthesize emoticonDescription=_emoticonDescription;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
- (void)reportAction:(int)arg1;
- (int)calScene;
@property(readonly, nonatomic) double height;
- (unsigned long long)convetToCustomEmoticonTypeWhenCanMod;
- (_Bool)isEmoticonCanShowStoreDetail;
- (_Bool)isEmoticonCanDelete;
- (_Bool)isEmoticonCanMod;
- (id)init;

@end

