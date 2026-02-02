//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FTSIndexDynamicConfig : NSObject
{
    _Bool _enableFastIndexing;
    _Bool _enableMemCacheSearch;
    unsigned int _uiMsgFastIndexThd;
    unsigned int _uiMsgFastIndexTh;
}

@property(nonatomic) unsigned int uiMsgFastIndexTh; // @synthesize uiMsgFastIndexTh=_uiMsgFastIndexTh;
@property(nonatomic) unsigned int uiMsgFastIndexThd; // @synthesize uiMsgFastIndexThd=_uiMsgFastIndexThd;
@property(nonatomic) _Bool enableMemCacheSearch; // @synthesize enableMemCacheSearch=_enableMemCacheSearch;
@property(nonatomic) _Bool enableFastIndexing; // @synthesize enableFastIndexing=_enableFastIndexing;
- (id)description;
- (id)init;

@end

