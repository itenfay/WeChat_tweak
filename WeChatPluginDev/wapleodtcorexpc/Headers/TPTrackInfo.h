//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TPDashFormat, TPHlsTag;

@interface TPTrackInfo : NSObject
{
    _Bool _isSelected;
    _Bool _isInternal;
    _Bool _isExclusive;
    unsigned long long _trackType;
    unsigned long long _containerType;
    NSString *_name;
    NSString *_language;
    TPHlsTag *_hlsTag;
    TPDashFormat *_dashFormat;
}

- (void).cxx_destruct;
@property(copy, nonatomic) TPDashFormat *dashFormat; // @synthesize dashFormat=_dashFormat;
@property(copy, nonatomic) TPHlsTag *hlsTag; // @synthesize hlsTag=_hlsTag;
@property(nonatomic) _Bool isExclusive; // @synthesize isExclusive=_isExclusive;
@property(nonatomic) _Bool isInternal; // @synthesize isInternal=_isInternal;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long containerType; // @synthesize containerType=_containerType;
@property(nonatomic) unsigned long long trackType; // @synthesize trackType=_trackType;
- (id)init;

@end

