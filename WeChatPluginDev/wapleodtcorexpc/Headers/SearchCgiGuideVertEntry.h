//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SearchCgiGuideVertEntry : NSObject
{
    _Bool _needHideKeyBoard;
    _Bool _needUpdateLocation;
    unsigned int _opType;
    unsigned long long _businessType;
    NSString *_title;
    unsigned long long _index;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needUpdateLocation; // @synthesize needUpdateLocation=_needUpdateLocation;
@property(nonatomic) _Bool needHideKeyBoard; // @synthesize needHideKeyBoard=_needHideKeyBoard;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) unsigned int opType; // @synthesize opType=_opType;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;

@end

