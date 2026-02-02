//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class QIndoorInfo;

@interface MMLocatingCoordinateCommonParams : NSObject
{
    unsigned long long _scene;
    unsigned long long _languageScene;
    long long _type;
    QIndoorInfo *_indoorInfo;
    id _requestObj;
}

- (void).cxx_destruct;
@property(nonatomic) id requestObj; // @synthesize requestObj=_requestObj;
@property(retain, nonatomic) QIndoorInfo *indoorInfo; // @synthesize indoorInfo=_indoorInfo;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long languageScene; // @synthesize languageScene=_languageScene;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (id)init;

@end

