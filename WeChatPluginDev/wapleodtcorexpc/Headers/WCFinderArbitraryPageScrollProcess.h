//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCFinderArbitraryPageScrollProcess : NSObject
{
    _Bool _needReloadAfterScroll;
    long long _type;
    long long _fromIdx;
    long long _toIdx;
    double _fromOffset;
    long long _otherPageIdx;
    NSMutableArray *_pendingSwitchTab;
    struct ConfigOffset _offset;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pendingSwitchTab; // @synthesize pendingSwitchTab=_pendingSwitchTab;
@property(nonatomic) _Bool needReloadAfterScroll; // @synthesize needReloadAfterScroll=_needReloadAfterScroll;
@property(nonatomic) long long otherPageIdx; // @synthesize otherPageIdx=_otherPageIdx;
@property(nonatomic) struct ConfigOffset offset; // @synthesize offset=_offset;
@property(nonatomic) double fromOffset; // @synthesize fromOffset=_fromOffset;
@property(nonatomic) long long toIdx; // @synthesize toIdx=_toIdx;
@property(nonatomic) long long fromIdx; // @synthesize fromIdx=_fromIdx;
@property(nonatomic) long long type; // @synthesize type=_type;

@end

