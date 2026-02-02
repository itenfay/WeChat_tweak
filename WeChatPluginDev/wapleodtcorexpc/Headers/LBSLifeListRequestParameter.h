//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CLLocation, NSString;

@interface LBSLifeListRequestParameter : NSObject
{
    _Bool _fromStart;
    _Bool _requestFullRange;
    unsigned int _scene;
    unsigned int _entryTime;
    CLLocation *_location;
    NSString *_keyword;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool requestFullRange; // @synthesize requestFullRange=_requestFullRange;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) _Bool fromStart; // @synthesize fromStart=_fromStart;
@property(nonatomic) unsigned int entryTime; // @synthesize entryTime=_entryTime;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;

@end

