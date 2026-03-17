//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderPostHelperParams : NSObject
{
    unsigned int _profileEnterType;
    unsigned long long _enterScene;
    unsigned long long _createFrom;
    unsigned long long _createScene;
    unsigned long long _publisherEnterType;
}

+ (id)paramsWithEnterScene:(unsigned long long)arg1 createFrom:(unsigned long long)arg2 createScene:(unsigned long long)arg3;
@property(nonatomic) unsigned long long publisherEnterType; // @synthesize publisherEnterType=_publisherEnterType;
@property(nonatomic) unsigned int profileEnterType; // @synthesize profileEnterType=_profileEnterType;
@property(nonatomic) unsigned long long createScene; // @synthesize createScene=_createScene;
@property(nonatomic) unsigned long long createFrom; // @synthesize createFrom=_createFrom;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;

@end

