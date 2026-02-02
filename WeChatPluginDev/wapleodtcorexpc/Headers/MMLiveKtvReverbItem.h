//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveKtvReverbItem : NSObject
{
    unsigned long long _type;
    NSString *_displayName;
    NSString *_thumbnailUri;
}

+ (id)reverbItemWithResource:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *thumbnailUri; // @synthesize thumbnailUri=_thumbnailUri;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end

