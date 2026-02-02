//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMCameraFilterDataItem : NSObject
{
    float _defaultValue;
    NSString *_filterId;
    NSString *_title;
    NSString *_filterImageUri;
    NSString *_filterImageMd5Hash;
    NSString *_filterImagePath;
    NSString *_coverColorString;
    unsigned long long _type;
}

+ (id)defaultFilterDataItems;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *coverColorString; // @synthesize coverColorString=_coverColorString;
@property(retain, nonatomic) NSString *filterImagePath; // @synthesize filterImagePath=_filterImagePath;
@property(retain, nonatomic) NSString *filterImageMd5Hash; // @synthesize filterImageMd5Hash=_filterImageMd5Hash;
@property(retain, nonatomic) NSString *filterImageUri; // @synthesize filterImageUri=_filterImageUri;
@property(nonatomic) float defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *filterId; // @synthesize filterId=_filterId;
@property(readonly, nonatomic) _Bool effective;

@end

